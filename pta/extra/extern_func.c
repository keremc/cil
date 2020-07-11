int *a;

extern int f(int *, int **);

int main(void)
{
	int b, *c, *d;
	b = f(c, &d);
	return 0;
}
