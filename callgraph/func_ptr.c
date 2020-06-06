#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void
print(char c)
{
	printf("c = %c\n", c);
}

void
noop(char c)
{
}

void
start(void)
{
	int	n;
	void	(*g)(char);

	n = rand();
	g = n % 2 == 0 ? print : noop;
	g('g');
}

int
main(void)
{
	int	n;
	void	(*f)(char);

	srand(time(NULL));

	n = rand();
	f = n % 2 == 0 ? print : noop;
	f('f');

	start();

	return 0;
}
