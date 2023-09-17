#include "stdio.h"
#include "stdlib.h"
int main() {
  int *max(int *p1, int *p2);
  int *add(int *p1, int *p2);
  int a = 0, b = 0, n = 0;
  int *pa = &a, *pb = &b, *p = NULL;
  int *(*pf)(int *, int *) = NULL;
  scanf("%d%d", pa, pb);
  printf("please 1 for max or 2 for add:");
  scanf("%d", &n);
  if (n == 1) {
    pf = max;
  }
  else if (n == 2) {
    pf = add;
  }
  else {
    printf("input error\n");
    exit(0);
  }
  p = (*pf)(pa, pb);
  if (n == 1) {
    printf("%d is bigger one\n", *p);
  }
  else {
    printf("%d + %d = %d\n", *pa, *pb, *p);
  }
  return 0;
}
int *max(int *p1, int *p2) {
  if (*p1 > *p2)
      return p1;
  else
      return p2;
}
int *add(int *p1, int *p2) {
  int t, *p = &t;
  t = *p1 + *p2;
  return p;
}