#define NULL 0

struct mutex {
	int i;
};

extern void lock(struct mutex *);
extern void unlock(struct mutex *);

struct mutex a = {0};

void
f()
{
	lock(&a);
	unlock(&a);
}

int
main(void)
{
	lock(&a);
	unlock(&a);
	return 0;
}
