extern void abort(void);
#include <assert.h>
void reach_error() { assert(0); }

extern void __VERIFIER_atomic_begin();
extern void __VERIFIER_atomic_end();

#include <pthread.h>

void __VERIFIER_assert(int expression) { if (!expression) { ERROR: {reach_error();abort();}}; return; }

int i=1, j=1;

#define NUM 11

void *
t1(void* arg)
{
  int k = 0;

  for (k = 0; k < NUM; k++) {
    __VERIFIER_atomic_begin();
    i+=j;
    __VERIFIER_atomic_end();
  }
  pthread_exit(NULL);
}

void *
t2(void* arg)
{
  int k = 0;

  for (k = 0; k < NUM; k++) {
    __VERIFIER_atomic_begin();
    j+=i;
    __VERIFIER_atomic_end();
  }
  pthread_exit(NULL);
}

int
main(int argc, char **argv)
{
  pthread_t id1, id2;

  pthread_create(&id1, NULL, t1, NULL);
  pthread_create(&id2, NULL, t2, NULL);


  __VERIFIER_atomic_begin();
  int condI = i >= 46368;
  __VERIFIER_atomic_end();

  __VERIFIER_atomic_begin();
  int condJ = j >= 46368;
  __VERIFIER_atomic_end();

  if (condI || condJ) {
    ERROR: {reach_error();abort();}
  }

  return 0;
}
