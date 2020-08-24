int main(void)
{
	int n = 4;
	typedef int vla[n]; // vla is int[4]
	n++;
	vla a; // n is now 5 but vla is still int[4]
	int i = sizeof(a); // i = 4 * sizeof(int)
	return 0;
}
