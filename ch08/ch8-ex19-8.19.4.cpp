#include "stdio.h"
int main() {
  void *pv;
  int a = 1, *pa = &a, *pt;
  pv = pa;
  printf("pv = %p, pa = %p\n", pv, pa);
  pt = (int *)pv;   //ǿ������ת��
  printf("pv = %p, pt = %p\n", pv, pt);
  printf("%d\n", *pt);
  return 0;
}