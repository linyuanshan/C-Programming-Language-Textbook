#include <stdio.h>
/*�׳˺���*/ 
long fac(int n){
  long t=1;
  if(n==1||n==0)
    t=1;
  else
    t=n*fac(n-1); /*�ݹ����*/ 
  return t;
}
int main( ){
  int n;   /*��������*/ 
  int nc; /*��ϵͳ��������*/ 
  printf("����������ĸ���\n");
  scanf("%d",&n);
  nc=fac(n);
  printf("ϵͳ��������nc=%ld",nc);
  return 0;
}



