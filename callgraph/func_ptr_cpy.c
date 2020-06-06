#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void
print(char c)
{
	printf("c = %c\n", c);
}

void
upper(char c)
{
	printf("toupper(c) = %c\n", toupper(c));
}

void
noop(char c)
{
}

void
start(void)
{
	int	n;
	void	(*h)(char);

	n = rand();
	h = n % 2 == 0 ? upper : noop;
	h('h');
}

int
main(void)
{
	int	n;
	void	(*f)(char);
	void	(*g)(char);

	srand(time(NULL));

	n = rand();
	f = n % 2 == 0 ? print : noop;

	g = f;
	g('g');

	start();

	return 0;
}
