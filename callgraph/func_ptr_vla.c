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
	int n, i;

	srand(time(NULL));

	n = rand() % 10;
	void (*f[n])(char);

	for (i = 0; i < n; i++) {
		f[i] = rand() % 2 == 0 ? print : noop;
	}

	for (i = 0; i < n; i++) {
		f[i](i + 48); /* Convert i to ASCII char */
	}

	return 0;
}
