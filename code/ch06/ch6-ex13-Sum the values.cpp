#include <stdio.h>
int sum(int n){
  int s;
  if(n==1)
    s=1;
  else
    s=n+sum(n-1);  /*递归调用*/
  return s;
}
int main( ){
  int  n;    
  printf("请输入累加上限n\n");
  scanf("%d",&n);
  printf("sum=%d\n",sum(n));
  return 0;
}



