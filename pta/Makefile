CC	= gcc
CFLAGS	= -E

SRCDIR	= 01-cpa
SRCS	= $(wildcard $(SRCDIR)/*.c)
OBJS	= $(patsubst %.c,%.i,$(SRCS))

all: $(OBJS)

%.i: %.c
	$(CC) $(CFLAGS) -o $@ $<

clean:
	-rm -f $(OBJS)
