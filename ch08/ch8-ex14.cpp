#include "stdio.h"
int main() {
  int *max(int *p1, int *p2);
  int a = 0, b = 0;
  int *pa = &a, *pb = &b, *p = NULL;
  scanf("%d%d", pa, pb);
  p = max(pa, pb);
  printf("%d is bigger one\n", *p);
  return 0;
}
int *max(int *p1, int *p2) {
  if (*p1 > *p2)
    return p1;
  else
    return p2;
}