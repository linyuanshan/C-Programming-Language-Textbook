#include <stdio.h>
int sum(float a,float b) {     /*��������ֵ������int��  */    
  float c;
  c=a+b;
  return c;                /* return��䷵��float��  */
}
int main(){
  float x=3.6,y=4.9,z;
  z=sum(x,y);             /* ����sum()��������ֵΪ8��int���ͣ� */
  printf("%.1f+%.1f=%.1f",x,y,z);
}

