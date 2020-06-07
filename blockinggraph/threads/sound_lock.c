#include <pthread.h>
#include <stdio.h>

extern int pthread_join(pthread_t, void **) __attribute__((yield));
extern int pthread_mutex_lock(pthread_mutex_t *) __attribute__((yield));

/* int	main(void)  __attribute__((start)) __attribute__((expand)); */
void	*t_fun(void *) __attribute__((start)) __attribute__((expand));

int myglobal;
pthread_mutex_t mutex1 = PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t mutex2 = PTHREAD_MUTEX_INITIALIZER;

void *t_fun(void *arg) {
  pthread_mutex_lock(&mutex1);
  myglobal=myglobal+1; // RACE!
  pthread_mutex_unlock(&mutex1);
  return NULL;
}

int main(void) {
  int i;
  pthread_t id;
  pthread_mutex_t *m = &mutex1;
  if (i) m = &mutex2;
  pthread_create(&id, NULL, t_fun, NULL);
  pthread_mutex_lock(m);
  myglobal=myglobal+1; // RACE!
  pthread_mutex_unlock(m);
  pthread_join (id, NULL);
  return 0;
}
