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

int
main(void)
{
	int	i;
	void	(*f[4])(char);

	srand(time(NULL));

	for (i = 0; i < 4; i++) {
		f[i] = rand() % 2 == 0 ? print : noop;
	}

	for (i = 0; i < 4; i++) {
		f[i](i + 48); /* Convert i to ASCII char */
	}

	return 0;
}
