#include "stdio.h"
int main() {
  void exchange(int *p1, int *p2);
  int a = 97, b = 98, t = 0;
  int *pointer_a = &a, *pointer_b = &b;
  // 交换指针变量的值
  exchange (pointer_a, pointer_b);
  printf("a的值为:%d, b的值为：%d\n", a, b);
  return 0;
}
void exchange (int *p1, int *p2) {
  int t = 0;
  t = *p1; 
  *p1 = *p2; 
  *p2 = t;
}