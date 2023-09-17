#include <stdio.h>
int sum(float a,float b) {     /*函数返回值类型是int型  */    
  float c;
  c=a+b;
  return c;                /* return语句返回float型  */
}
int main(){
  float x=3.6,y=4.9,z;
  z=sum(x,y);             /* 调用sum()函数返回值为8（int类型） */
  printf("%.1f+%.1f=%.1f",x,y,z);
}

