#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void
print(char c)
{
	printf("c = %c\n", c);
}

void (*f)(char) = print;

int
main(void)
{
	f('f');
	return 0;
}
