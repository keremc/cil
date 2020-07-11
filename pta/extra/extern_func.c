int *a, *b;

extern int fn(int *, int **, int **);

int main(void)
{
	int c, *d, *e, *f;
	a = &c;
	e = &c;
	c = fn(d, &e, &f);
	return 0;
}
