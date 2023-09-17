#include<stdio.h>
#define PI 3.1415926 
double Gravity(double dDensity,double dRadius,double dHeight){
double dVolume;/*局部变量*/ 
dVolume= PI * dRadius* dRadius* dHeight; 
return 9.8* dDensity* dVolume;  /*1kg=9.8N*/
}
int main() {
double dD1=7.874, dD2=8.96, dD3=4.54, dD4=7.44;/*部件密度*/
int iR1=50, iR2=60, iR3=80, iR4=20;/*部件底面积半径mm*/
int iH1=100, iH2=200, iH3=800, iH4=500;/*部件高度mm*/
double dg1, dg2, dg3, dg4;/*部件重力*/
/*部件重力计算，1000为单位换算*/
dg1=Gravity(dD1*1000., iR1/1000., iH1/1000.); 
dg2=Gravity(dD2*1000., iR2/1000., iH2/1000.);
dg3=Gravity(dD3*1000., iR3/1000., iH3/1000.);
dg4=Gravity(dD4*1000., iR4/1000., iH4/1000.);
printf("dg1=%.3lfN\ndg2=%.3lfN\ndg3=%.3lfN\ndg4=%.3lfN\n",
     dg1, dg2, dg3, dg4);  
return 0;
}

