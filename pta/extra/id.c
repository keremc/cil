int *id(int *r)
{
	return r;
}

int main(void)
{
	int x, y, *p, *q;
	p = id(&x);
	q = id(&y);
	return 0;
}
