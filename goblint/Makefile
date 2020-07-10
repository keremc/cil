CC	= gcc
CFLAGS	= -E

SRCS	= $(wildcard */*.c)
OBJS	= $(patsubst %.c,%.i,$(SRCS))

all: $(OBJS)

%.i: %.c
	$(CC) $(CFLAGS) -o $@ $<

clean:
	-rm -f $(OBJS)
