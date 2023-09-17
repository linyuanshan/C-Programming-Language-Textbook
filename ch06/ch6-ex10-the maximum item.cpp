#include <stdio.h>
int max(int b[][3]){ /*二维数组只能省略第一下标*/ 
  int m,i,j;
  m=b[0][0];
  for(i=0;i<3;i++)
    for(j=0;j<3;j++)
      if(b[i][j]>m)m=b[i][j];
  return m;
}
int main(){ 
  int a[3][3]={-8,2,3,4,-5,13,6,7,10};
  printf("数组最大元素的值：%4d\n",max(a));  /*二维数组名作为函数实参*/ 
  return 0; 
}


