#include <stdio.h>
int Judge(int k){
  if(k%2) return 1;  /*奇数*/ 
  else return 0;    /*偶数 */
}
int main(){ 
  int a[7]={2,3,4,5,6,7,8},i;
  int SumOdd=0,SumEven=0; /*奇偶数求和变量 */ 
  for(i=0;i<7;i++)
    if (Judge(a[i]))/* 数组a的元素做函数参数*/
      SumOdd+=a[i];   
    else 
      SumEven+=a[i];
   printf("奇数和=%4d\n偶数和=%4d\n",SumOdd,SumEven);
  return 0; 
}

