#include <stdio.h>
int max(int b[][3]){ /*��ά����ֻ��ʡ�Ե�һ�±�*/ 
  int m,i,j;
  m=b[0][0];
  for(i=0;i<3;i++)
    for(j=0;j<3;j++)
      if(b[i][j]>m)m=b[i][j];
  return m;
}
int main(){ 
  int a[3][3]={-8,2,3,4,-5,13,6,7,10};
  printf("�������Ԫ�ص�ֵ��%4d\n",max(a));  /*��ά��������Ϊ����ʵ��*/ 
  return 0; 
}


