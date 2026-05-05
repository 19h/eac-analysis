#!/usr/bin/env bash
set -euo pipefail

SRC="${1:-dumps/vmtail-wide-1m-w16/vm_recovered_source_all_evidence_bundle.c}"
OUT="${2:-vm.opt.bc}"
MAX_ITERS="${MAX_ITERS:-50}"
TOLERANCE="${TOLERANCE:-100}"

WORK="$(mktemp -d)"
trap 'rm -rf "$WORK"' EXIT

RAW="$WORK/vm.bc"
STAGE1="$WORK/vm.s1.bc"
CUR="$WORK/vm.cur.bc"
TMP="$WORK/vm.tmp.bc"
BEST="$WORK/vm.best.bc"

PIPE='function(instcombine<no-verify-fixpoint>,reassociate,instcombine<no-verify-fixpoint>,aggressive-instcombine,instcombine<no-verify-fixpoint>,gvn,instcombine<no-verify-fixpoint>,sccp,instcombine<no-verify-fixpoint>,dse,instcombine<no-verify-fixpoint>,early-cse<memssa>,instcombine<no-verify-fixpoint>,jump-threading,instcombine<no-verify-fixpoint>,correlated-propagation,instcombine<no-verify-fixpoint>,simplifycfg,instcombine<no-verify-fixpoint>,adce)'

OPT_LIMITS=(
    --instcombine-max-num-phis=10000
    --instcombine-max-sink-users=10000
    --dse-memoryssa-walklimit=10000
    --dse-memoryssa-scanlimit=10000
)

# update_best <file>: if file is smaller than current best, promote it
update_best() {
    local sz; sz=$(stat -c%s "$1")
    if [ ! -f "$BEST" ] || [ "$sz" -lt "$(stat -c%s "$BEST")" ]; then
        cp "$1" "$BEST"
    fi
}

# run_fixpoint_loop <input> <label>: iterates PIPE on input, updates CUR + BEST
run_fixpoint_loop() {
    local label="$1"
    local prev_size new_size delta abs_delta
    prev_size=$(stat -c%s "$CUR")
    update_best "$CUR"

    for ((i=1; i<=MAX_ITERS; i++)); do
        if ! opt -passes="$PIPE" "${OPT_LIMITS[@]}" "$CUR" -o "$TMP" 2>/dev/null; then
            echo "    [$label] iter $i: opt failed, stopping"
            break
        fi
        new_size=$(stat -c%s "$TMP")
        delta=$((new_size - prev_size))
        abs_delta=${delta#-}

        printf "    [%s] iter %2d: %d bytes (Δ %+d)\n" "$label" "$i" "$new_size" "$delta"

        update_best "$TMP"

        if [ "$new_size" -gt "$prev_size" ]; then
            echo "    [$label] grew → stop"
            break
        fi
        if [ "$abs_delta" -lt "$TOLERANCE" ]; then
            echo "    [$label] converged (|Δ| < $TOLERANCE) → stop"
            mv "$TMP" "$CUR"
            break
        fi
        mv "$TMP" "$CUR"
        prev_size=$new_size
    done
}

echo "==> [1/6] clang -O1 -emit-llvm  ($SRC)"
clang -std=c11 -O1 -emit-llvm -c -fPIC -Wno-unused-function "$SRC" -o "$RAW"
echo "    $(stat -c%s "$RAW") bytes"

echo "==> [2/6] opt default<O3> + heavy simplification cluster"
opt -passes='default<O3>,function(instcombine<no-verify-fixpoint>,reassociate,instcombine<no-verify-fixpoint>,gvn,instcombine<no-verify-fixpoint>,aggressive-instcombine,instcombine<no-verify-fixpoint>,sccp,instcombine<no-verify-fixpoint>,dse,instcombine<no-verify-fixpoint>,simplifycfg,instcombine<no-verify-fixpoint>,early-cse<memssa>,instcombine<no-verify-fixpoint>,jump-threading,instcombine<no-verify-fixpoint>,correlated-propagation,instcombine<no-verify-fixpoint>,adce,instcombine<no-verify-fixpoint>)' \
    "${OPT_LIMITS[@]}" \
    "$RAW" -o "$STAGE1"
cp "$STAGE1" "$CUR"
update_best "$CUR"
echo "    $(stat -c%s "$CUR") bytes"

echo "==> [3/6] function-cluster fixpoint (pass 1)"
run_fixpoint_loop "f1"
echo "    pass-1 best: $(stat -c%s "$BEST") bytes"

echo "==> [4/6] loop + vectorizer cluster"
opt -passes='function(loop-mssa(loop-rotate,licm,loop-instsimplify,indvars,loop-deletion,loop-unroll-full),loop-unroll,gvn-hoist,gvn-sink,slp-vectorizer,load-store-vectorizer,instcombine<no-verify-fixpoint>,simplifycfg,adce)' \
    "${OPT_LIMITS[@]}" \
    "$CUR" -o "$TMP" && mv "$TMP" "$CUR"
update_best "$CUR"
echo "    $(stat -c%s "$CUR") bytes"

echo "==> [5/6] iterated module IPO"
for j in 1 2 3 4 5; do
    prev=$(stat -c%s "$CUR")
    opt -passes='module(inline,argpromotion,ipsccp,globaldce,deadargelim,function-attrs),function(instcombine<no-verify-fixpoint>,simplifycfg,adce)' \
        --inline-threshold=1000000 \
        --inlinehint-threshold=1000000 \
        --inlinedefault-threshold=1000000 \
        "${OPT_LIMITS[@]}" \
        "$CUR" -o "$TMP" && mv "$TMP" "$CUR"
    new=$(stat -c%s "$CUR")
    update_best "$CUR"
    echo "    ipo iter $j: $new bytes (Δ $((new - prev)))"
    [ $((prev - new)) -lt "$TOLERANCE" ] && break
done

echo "==> [6/6] function-cluster fixpoint (pass 2, post-IPO)"
run_fixpoint_loop "f2"

# final: pick the smallest seen across the entire pipeline
cp "$BEST" "$OUT"
echo "==> done: $OUT ($(stat -c%s "$OUT") bytes)"

SO_OUT="${OUT%.bc}.so"
echo "==> [7/7] codegen $SO_OUT"

clang -shared -fPIC -pthread \
      -O3 -march=native -mtune=native \
      -ffast-math -fno-math-errno -fno-trapping-math \
      -fno-semantic-interposition -fvisibility=hidden \
      -fno-unwind-tables -fno-asynchronous-unwind-tables -fno-exceptions \
      -fomit-frame-pointer \
      -fuse-ld=lld \
      -Wl,--gc-sections,--icf=all,-O3 \
      "$OUT" -o "$SO_OUT"


echo "    $(stat -c%s "$SO_OUT") bytes"