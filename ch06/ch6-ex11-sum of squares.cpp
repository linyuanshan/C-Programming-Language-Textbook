#include <stdio.h>
int Powers(int m, int n){ /*Powers�������ܣ�m��n����*/
  int j, p=1;
  for (j=1; j<=n; j++)
    p=p*m;
  return(p);
}
int Sum(int a,int b) {   /*Sum�������ܣ������ۼ�*/
  int i, s=0;
  for(i=1; i<=b; i++)
    s=s+Powers(i,a); /*Ƕ�׵���*/
  return(s);
}
int main( ) {
  int sum, n=6, k=2;    /*n������k��ָ�� */
  printf("sum: %d",Sum(k,n));
  return 0;
}

