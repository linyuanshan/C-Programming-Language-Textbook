#include <stdio.h>
void swap (double a,double b){           /* a、b是形式参数*/
  double t;
  t=a;a=b;b=t;     /* a、b值互换*/
}
int main(){
  double g1= 60.605,g2=198.617;
  printf("调用前\n");
  printf("g1=%.3f,g2=%.3f\n",g1,g2);
  swap(g1,g2);  
  printf("调用后\n");             /* g1、g2是实际参数*/
  printf("g1=%.3f,g2=%.3f\n",g1,g2);
  return 0;
}

