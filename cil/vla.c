int sum(int n, int a[n])
{
	int sum = 0;
	for (int i = 0; i < n; ++i) {
		sum += a[i];
	}
	return sum;
}

int main(void)
{
	int n = 0;
	for (int i = 0; i < 5; ++i) {
		++n;
	}

	int a[n];
	++n;
	int i = sizeof(a);

	int j = sum(sizeof(a) / sizeof(*a), a);

	return 0;
}
