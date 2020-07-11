char
first(const char *s)
{
	return *s;
}

int
main(void)
{
	const char *s = "Hi";
	first(s);
	return 0;
}
