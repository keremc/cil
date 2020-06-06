#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void
add(int x, int y)
{
	printf("%d + %d = %d\n", x, y, x + y);
}

void
sub(int x, int y)
{
	printf("%d - %d = %d\n", x, y, x - y);
}

int
main(void)
{
	int	n;
	int	(*f)(int);
	void	(*g)(int, int);

	srand(time(NULL));
	n = rand();

	if (n % 2 == 0) {
		f = toupper;
		g = add;
	} else {
		f = tolower;
		g = sub;
	}

	printf("f('f') = %c\n", f('f'));
	g(1, 2);

	return 0;
}
