void f(int *p) {}

int
main(void)
{
	int a, b, c, d, *p;
	p = &a;
	f(p);
	p = &b;
	p = &c;
	f(&d);
	return 0;
}
