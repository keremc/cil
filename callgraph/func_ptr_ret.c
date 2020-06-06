#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef void (*func_ptr)(char);

void
print(char c)
{
	printf("c = %c\n", c);
}

void
noop(char c)
{
}

func_ptr
ret(void)
{
	srand(time(NULL));
	return rand() % 2 == 0 ? print : noop;
}

int
main(void)
{
	void (*f)(char);

	f = ret();
	f('f');

	return 0;
}
