#include <stdio.h>
int Judge(int k){
  if(k%2) return 1;  /*����*/ 
  else return 0;    /*ż�� */
}
int main(){ 
  int a[7]={2,3,4,5,6,7,8},i;
  int SumOdd=0,SumEven=0; /*��ż����ͱ��� */ 
  for(i=0;i<7;i++)
    if (Judge(a[i]))/* ����a��Ԫ������������*/
      SumOdd+=a[i];   
    else 
      SumEven+=a[i];
   printf("������=%4d\nż����=%4d\n",SumOdd,SumEven);
  return 0; 
}

