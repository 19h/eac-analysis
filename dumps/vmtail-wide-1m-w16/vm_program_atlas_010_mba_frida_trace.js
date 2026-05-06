// Focused VM Program Atlas 010 MBA evidence logger.
// Fill FN with the native dispatcher/function address if one is available in the target.
// The logger records the fields needed to reduce each MBA transition:
// state, key, old/new ctx->next, ctx->ip bytes/u16s, ctx pointer, and alias proof.
"use strict";

const FN_ADDRESS = "PUT_VM_PROGRAM_ATLAS_010_FUNCTION_ADDRESS_HERE";
if (FN_ADDRESS.indexOf("PUT_") === 0) {
    throw new Error("Set FN_ADDRESS to the native dispatcher/function address before loading this script");
}
const FN = ptr(FN_ADDRESS);
const STATES = new Set(["0x11c2aa", "0x11c407", "0x11c690", "0x11ca38", "0x11cd05", "0x11cf2f", "0x11d215", "0x11d3e1", "0x11d6b0", "0x11d929", "0x11da4b", "0x11db16", "0x11dc37", "0x11dd03", "0x11de27"]);

function hx(v) {
    return "0x" + v.toString(16);
}

function u16(p) {
    return p.readU16();
}

function bytes6(p) {
    const out = [];
    for (let i = 0; i < 6; i++) {
        out.push(p.add(i).readU8().toString(16).padStart(2, "0"));
    }
    return out.join(" ");
}

Interceptor.attach(FN, {
    onEnter(args) {
        this.ctx = args[0];
        this.state = args[1].toUInt32();
        this.keep = STATES.has(hx(this.state));
        if (!this.keep) {
            return;
        }
        this.ip = this.ctx.readPointer();
        this.nextPtr = this.ctx.add(0x08);
        this.oldNext = this.nextPtr.readU32();
        this.key = this.ctx.add(0x0c).readU32();
        this.aliasNextInIpWindow =
            this.nextPtr.compare(this.ip) >= 0 && this.nextPtr.compare(this.ip.add(6)) < 0;
        this.before = {
            state: hx(this.state),
            ctx: this.ctx.toString(),
            ip: this.ip.toString(),
            next_ptr: this.nextPtr.toString(),
            alias_next_in_ip_window: this.aliasNextInIpWindow,
            key: hx(this.key),
            old_next: hx(this.oldNext),
            bytes: bytes6(this.ip),
            b0: hx(this.ip.readU8()),
            b1: hx(this.ip.add(1).readU8()),
            b2: hx(this.ip.add(2).readU8()),
            b3: hx(this.ip.add(3).readU8()),
            b4: hx(this.ip.add(4).readU8()),
            b5: hx(this.ip.add(5).readU8()),
            u16_0: hx(u16(this.ip)),
            u16_1: hx(u16(this.ip.add(1))),
            u16_2: hx(u16(this.ip.add(2))),
            u16_4: hx(u16(this.ip.add(4)))
        };
    },
    onLeave(retval) {
        if (!this.keep) {
            return;
        }
        this.before.new_next = hx(this.nextPtr.readU32());
        this.before.retval = retval.toString();
        console.log(JSON.stringify(this.before));
    }
});
