#include <pthread.h>
#include <stdio.h>

/* int	main(void)  __attribute__((start)) __attribute__((expand)); */
void	*t_fun(void *) __attribute__((start)) __attribute__((expand));

int global;

void bad() { global++; } // RACE!
void good() { printf("Hello!"); }

void (*f)() = good;

void *t_fun(void *arg) {
  f(); // RACE!
  return NULL;
}

int main() {
  pthread_t id;
  pthread_create(&id, NULL, t_fun, NULL);
  f = bad; // RACE!
  printf("global: %d\n", global); // RACE!
  return 0;
}
