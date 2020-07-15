#include <stdlib.h>

void *g(size_t sz)
{
	return malloc(sz);
}

int main(void)
{
	void *(*f)(size_t) = malloc;
	int *a, *b;

	a = f(sizeof(int));
	b = g(sizeof(int));

	return 0;
}
