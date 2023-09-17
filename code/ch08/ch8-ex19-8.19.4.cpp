#include "stdio.h"
int main() {
  void *pv;
  int a = 1, *pa = &a, *pt;
  pv = pa;
  printf("pv = %p, pa = %p\n", pv, pa);
  pt = (int *)pv;   //强制类型转换
  printf("pv = %p, pt = %p\n", pv, pt);
  printf("%d\n", *pt);
  return 0;
}