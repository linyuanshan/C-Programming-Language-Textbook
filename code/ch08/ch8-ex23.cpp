#include "stdio.h"
#include "stdlib.h"
int main() {
  int *p = NULL;
  p = (int *)malloc(sizeof(int));
  *p = 100;
  printf("%p: %d\n", p, *p);
  free(p);
  if (p != NULL) {
    *p = 150;     //使用了野指针
    printf("%p: %d\n", p, *p);
  }
}