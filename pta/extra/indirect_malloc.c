#include <stdlib.h>

int main(void)
{
	void *(*f)(size_t);
	f = malloc;
	int *p = f(sizeof(int));
	return 0;
}
