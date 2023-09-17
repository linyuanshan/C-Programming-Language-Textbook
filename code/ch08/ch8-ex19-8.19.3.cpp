#include "stdio.h"
int main() {
  void *pv;
  int a, *pa = &a, *pt;
  pv = pa;
  printf("pv = %p, pa = %p\n", pv, pa);
  pt = pv;
  printf("pv = %p, pt = %p\n", pv, pt);
  return 0;
}