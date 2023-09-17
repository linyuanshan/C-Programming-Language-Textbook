#include <stdio.h>
int x=1;        /*全局变量x*/
void func(int a,int b){
  int x,y;      /*局部变量x*/
  x=a+b;
  printf("func函数内部x=%d\n",x);	
}
int main(){
  int a=1,b=2;
  func(a,b);
  printf("func函数外部x=%d\n",x);
  return 0;
}


