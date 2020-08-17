#include <stdio.h>

int f(int n, int a[n][n][n])
{
	int len = sizeof(**a) / sizeof(***a);
	return len;
}

int main(void)
{
	int i = f(2, NULL);
	printf("%d\n", i);
	return 0;
}
