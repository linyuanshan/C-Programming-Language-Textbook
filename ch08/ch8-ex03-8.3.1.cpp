#include "stdio.h"    
int main() {
  int num = 97;              //声明int类型变量num并赋初值
  int *pointer_num = NULL;   //声明指向int类型的指针变量pointer_num
  pointer_num = &num;      //为pointer_num赋值让其指向num
  printf("pointer_num地址:%p\n", &pointer_num);//输出pointer_num地址
  printf("pointer_num的值为：%p\n", pointer_num);//输出pointer_num值
  printf("num地址:%p,num的值：%d\n",&num,num); //输出num地址和值
  return 0;
}

