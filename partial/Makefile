CC	= gcc
CFLAGS	= -E

SOURCES		= $(wildcard */*.c)
PREPROCESSED	= $(patsubst %.c,%.i,$(SOURCES))
OUT		= $(patsubst %.c,%.cil,$(SOURCES))

all: $(PREPROCESSED)

%.i: %.c
	$(CC) $(CFLAGS) -o $@ $<

clean:
	-rm -f $(PREPROCESSED) $(OUT)
