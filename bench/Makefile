TARGET=siphash
.PHONY: $(TARGET)
RTLSRC=../rtl
all: $(TARGET)

LDFLAGS=
CFLAGS=-g -O3

$(TARGET):
	verilator -Wno-fatal -I$(RTLSRC) --cc $(@)_top.v --trace --exe $(@).cpp  -Mdir $(@) -CFLAGS "$(CFLAGS)"
	make -C $(@) -f V$(@)_top.mk
clean:: 
	rm -rf *.o $(TARGET)
distclean:: clean
	rm -rf *~ *.txt *.vcd *.mif *.orig
