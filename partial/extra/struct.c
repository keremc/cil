typedef struct integer {
	int data;
} integer;

int main(void)
{
	int	four = 4, five;
	integer	four_boxed = {4};

	five = four + 1;
	five = four_boxed.data + 1;

	return 0;
}
