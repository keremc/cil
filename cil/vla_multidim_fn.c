int sum(int n, int a[n][n])
{
	int sum = 0;
	int len = sizeof(*a);
	for (int i = 0; i < len; ++i) {
		sum += a[0][i];
	}
	return sum;
}

int main(void)
{
	return 0;
}
