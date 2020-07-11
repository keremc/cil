#include <stdlib.h>
#include <stdio.h>

struct allocator {
	void *(*alloc)(size_t);
	void  (*free)(void *);
};

struct object {
	int x;
	struct allocator alloc;
};

struct object *
object_new(int x, struct allocator *alloc)
{
	struct object *obj = alloc->alloc(sizeof(*obj));
	obj->x = x;
	obj->alloc = *alloc;
	return obj;
}

void
object_free(struct object *obj)
{
	obj->alloc.free(obj);
}

int
main(void)
{
	struct allocator alloc = {malloc, free};
	struct object *obj;

	obj = object_new(4, &alloc);
	printf("obj.x = %d\n", obj->x);

	object_free(obj);

	return 0;
}
