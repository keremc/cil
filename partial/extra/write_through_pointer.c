#include <assert.h>

int main(void)
{
	int i = 0;
	int *p = &i;
	*p = 1;
	assert(i);
	return 0;
}
