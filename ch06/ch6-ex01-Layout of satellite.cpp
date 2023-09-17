#include<stdio.h>
#define PI 3.1415926
int main() {
  double dD1=7.874, dD2=8.96, dD3=4.54, dD4=7.44;  /* 包裹密度*/
  int iR1=50, iR2=60, iR3=80, iR4=20;      /* 包裹底面积半径mm*/
  int iH1=100, iH2=200, iH3=800, iH4=500;  /* 包裹高度mm*/
  double dg1, dg2, dg3, dg4;    /* 包裹重力*/
  double dVolume;     /*包裹体积*/
  /*包裹重力计算，1000为单位换算*/
  dVolume=PI *(iR1/1000.) *(iR1/1000.)*(iH1/1000.);
  dg1=9.8*dD1*1000.* dVolume;
  dVolume=PI *(iR2/1000.) *(iR2/1000.)*(iH2/1000.);
  dg2=9.8*dD2*1000.* dVolume;
  dVolume=PI *(iR3/1000.) *(iR3/1000.)*(iH3/1000.);
  dg3=9.8*dD3*1000.* dVolume;
  dVolume=PI * (iR4 /1000.) *(iR4 /1000.) * (iH4 /1000.);
  dg4=9.8*dD4*1000.* dVolume;
  printf("dg1=%.3lfN\ndg2=%.3lfN\ndg3=%.3lfN\ndg4=%.3lfN\n",
        dg1, dg2, dg3, dg4);  
  return 0;
  }

