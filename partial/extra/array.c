#define LEN(ARRAY) (sizeof(ARRAY) / sizeof(*ARRAY))

int main(void)
{
	int a[4];
	int i = LEN(a) - 1;
	a[i] = i + 1;
	a[LEN(a) - 1] = a[i];
	return 0;
}
