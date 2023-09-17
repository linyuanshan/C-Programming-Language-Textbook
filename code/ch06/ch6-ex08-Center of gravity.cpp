#include <stdio.h>
#define Pi 3.1415926
/*重力计算函数*/
void Gravity(double Density[],int Radius[],int Height[],double g[],int n){ 
  /* n包裹总数*/
  int i;
  for(i=0;i<n;i++)
    g[i]=9.8*Density[i]*Pi*Radius[i]*Radius[i]*Height[i]/1e6;   /*1e6单位换算*/
}
/*系统重心计算函数*/
void GravityCentre(double Density[],int Radius[],int Height[],double g[],int x[],
                int y[],int n) {
  int i;
  double SumX=0,SumY=0,SumG=0.;
  float xc,yc;
  Gravity(Density,Radius, Height,g,4); /*调用包裹重力函数，数组名作为实参*/
  for(i=0;i<n;i++){
    SumX+=x[i]*g[i];
    SumY+=y[i]*g[i];
    SumG+=g[i];		
  }
  xc=SumX/SumG;
  yc=SumY/SumG;
  printf("xc=%.1fmm  yc=%.1fmm\n",xc,yc);  /*系统重心坐标计算*/
}
int main() {
  double D[]={7.874,8.96,4.54,7.44}; /*4个包裹密度数组*/
  int R[]={50,60,80,20};/*4个包裹底面积半径数组*/
  int H[]={100,200,800,500};/*4个包裹高度数组*/
  double g[4];/*4个包裹重力数组*/ 
  int x[]={-100,-150,50,105};  /*4个包裹重心x坐标*/
  int y[]={-100,75,50,-75};    /*4个包裹重心y坐标*/
  GravityCentre(D,R,H,g,x,y,4);/*包裹重心计算，数组名作为实参*/    
  printf("g1=%.3lfN\ng2=%.3lfN\ng3=%.3lfN\ng4=%.3lfN",g[0],g[1],g[2],g[3]);      
  return 0;
}

