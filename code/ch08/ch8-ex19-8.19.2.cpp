#include "stdio.h"
int main() {
  void *pv;
  int a, *pa = &a;
  pv = pa;
  printf("pv = %p, pa = %p\n", pv, pa);
  printf("%d, %d\n", *pv, *pa);
  return 0;
}