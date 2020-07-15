struct person {
	int   age;
	int (*onmove)(struct person *);
};

int move(struct person *p)
{
	return p->onmove(p);
}

int a_cb(struct person *p)
{
	return 0;
}

int b_cb(struct person *p)
{
	return 1;
}

int c_cb(struct person *p)
{
	return 2;
}

int main(void)
{
	struct person a = {20, a_cb};
	struct person b = {21, b_cb};
	move(&a);
	move(&b);
	return 0;
}
