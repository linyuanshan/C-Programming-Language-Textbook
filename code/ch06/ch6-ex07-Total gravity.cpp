#include <stdio.h>
int main(){
  double sum(double,double);              /*对sum函数原型的声明 */
  double g1=60.605,g2=198.617,g3=715.652,g4=45.812;
  printf("总重力=%.3lfN\n",sum(g1,sum(g2,sum(g3,g4))));
  return 0;
} 
double sum(double a,double b){
  return a+b;
}


