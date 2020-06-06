CC	= gcc
CFLAGS	= -E
OBJS	= $(patsubst %.c,%.i,$(wildcard *.c))

all: $(OBJS)

%.i: %.c
	$(CC) $(CFLAGS) -o $@ $<

clean:
	-rm -f $(OBJS)
