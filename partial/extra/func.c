#include <assert.h>

int add(int x, int y)
{
	return x + y;
}

int main(void)
{
	int i;

	i = add(4, 6);
	assert(i == 10);

	i = add(5, 6);
	assert(i == 11);

	return 0;
}
