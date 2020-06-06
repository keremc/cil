#include <stdio.h>

extern void (*f)(char);

void
print(char c)
{
	printf("c = %c\n", c);
}

int
main(void)
{
	void (*g)(char) = print;

	f('f');
	return 0;
}
