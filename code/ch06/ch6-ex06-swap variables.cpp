#include <stdio.h>
void swap (double a,double b){           /* a��b����ʽ����*/
  double t;
  t=a;a=b;b=t;     /* a��bֵ����*/
}
int main(){
  double g1= 60.605,g2=198.617;
  printf("����ǰ\n");
  printf("g1=%.3f,g2=%.3f\n",g1,g2);
  swap(g1,g2);  
  printf("���ú�\n");             /* g1��g2��ʵ�ʲ���*/
  printf("g1=%.3f,g2=%.3f\n",g1,g2);
  return 0;
}

