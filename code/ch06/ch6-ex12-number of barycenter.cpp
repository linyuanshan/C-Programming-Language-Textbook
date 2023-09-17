#include <stdio.h>
/*阶乘函数*/ 
long fac(int n){
  long t=1;
  if(n==1||n==0)
    t=1;
  else
    t=n*fac(n-1); /*递归调用*/ 
  return t;
}
int main( ){
  int n;   /*包裹总数*/ 
  int nc; /*待系统重心总数*/ 
  printf("请输入包裹的个数\n");
  scanf("%d",&n);
  nc=fac(n);
  printf("系统重心总数nc=%ld",nc);
  return 0;
}



