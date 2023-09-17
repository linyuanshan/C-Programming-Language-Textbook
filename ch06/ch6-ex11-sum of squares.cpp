#include <stdio.h>
int Powers(int m, int n){ /*Powers函数功能：m的n次幂*/
  int j, p=1;
  for (j=1; j<=n; j++)
    p=p*m;
  return(p);
}
int Sum(int a,int b) {   /*Sum函数功能：各项累加*/
  int i, s=0;
  for(i=1; i<=b; i++)
    s=s+Powers(i,a); /*嵌套调用*/
  return(s);
}
int main( ) {
  int sum, n=6, k=2;    /*n项数，k幂指数 */
  printf("sum: %d",Sum(k,n));
  return 0;
}

