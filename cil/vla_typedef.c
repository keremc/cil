int main(void)
{
	int n = 0;
	for (int i = 0; i < 5; ++i) {
		++n;
	}

	typedef int vla[n];

	++n;

	vla a;
	int i = sizeof(a);

	return 0;
}
