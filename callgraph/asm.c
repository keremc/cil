#include <stdio.h>

int
add(int x, int y)
{
	return x + y;
}

void
call(void)
{
	__asm__ (
	    "movl $2, %esi\n"
	    "movl $1, %edi\n"
	    "call add"
	);
}

int
main(void)
{
	int (*f)(int, int);

	__asm__ (
	    "mov %1, %0" : "=r" (f) : "r" (add)
	);

	printf("f(1, 2) = %d\n", f(1, 2));

	return 0;
}
