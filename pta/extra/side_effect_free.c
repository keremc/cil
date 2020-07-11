int a, b, c, d, *p;

void CHECK_F(int *i)
{
	p = &c;
	p = i;
}

void f(int *i)
{
	p = &d;
	p = i;
}

int main(void)
{
	CHECK_F(&a);
	f(&b);
	return 0;
}
