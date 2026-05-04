CC ?= gcc
CFLAGS ?= -O2 -g -Wall -Wextra -Wno-unused-parameter -Wno-nonnull-compare
LDFLAGS ?=

.PHONY: all clean

all: driver trace_preload.so

driver: driver.c
	$(CC) $(CFLAGS) -o $@ $< -ldl

trace_preload.so: trace_preload.c
	$(CC) $(CFLAGS) -fPIC -shared -o $@ $< -ldl -pthread

clean:
	rm -f driver trace_preload.so
