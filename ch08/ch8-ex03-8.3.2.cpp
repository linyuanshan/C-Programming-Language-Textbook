#include "stdio.h"    
int main() {
  int num = 97;              //声明int类型变量num并赋初值
  int *pointer_num;        //声明指向int类型的指针变量pointer_num
  pointer_num = &num;    //为pointer_num赋值让其指向num
  printf("pointer_num的值为：%p\n", pointer_num);//输出pointer_num
  printf("pointer_num所指向的变量值：%d\n", *pointer_num); 
//输出指针变量pointer_num所指向变量的值
  printf("num的值:%d\n",num); //输出num
  return 0;
}
