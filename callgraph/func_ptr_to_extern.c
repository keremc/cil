#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int
main(void)
{
	int	n;
	int	(*f)(int);

	srand(time(NULL));
	n = rand();

	f = n % 2 == 0 ? toupper : tolower;
	printf("f('f') = %c\n", f('f'));

	return 0;
}
