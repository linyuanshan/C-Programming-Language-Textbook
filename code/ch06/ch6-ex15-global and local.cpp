#include <stdio.h>
int x=1;        /*ȫ�ֱ���x*/
void func(int a,int b){
  int x,y;      /*�ֲ�����x*/
  x=a+b;
  printf("func�����ڲ�x=%d\n",x);	
}
int main(){
  int a=1,b=2;
  func(a,b);
  printf("func�����ⲿx=%d\n",x);
  return 0;
}


