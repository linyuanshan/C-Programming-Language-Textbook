#include "stdio.h"
int main() {
  void *pv;
  int a, *pa = &a;
  char *pc = "hello";
  pv = pa;
  printf("pv = %p, p1 = %p\n", pv, pa);
  pv = pc;
  printf("pv = %p, pc = %p\n", pv, pc);
  return 0;
}