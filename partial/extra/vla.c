int main(void)
{
	int n = 4;
	int a[n];
	int i = n - 1;
	a[i] = n;
	a[n - 1] = a[i];
	return 0;
}
