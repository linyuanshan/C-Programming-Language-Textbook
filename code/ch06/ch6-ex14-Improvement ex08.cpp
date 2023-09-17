#include <stdio.h>
#define Pi 3.1415926
int n=4;       /*n包裹总数：全局变量*/
double g[4];   /*g包裹重力数组：全局变量*/ 
void Gravity(double Density[],int Radius[],int Height[]){
/*去掉double g[],int n的定义*/
  int i;
  for(i=0;i<n;i++)
    g[i]=9.8*Density[i]*Pi*Radius[i]*Radius[i]*Height[i]/1e6;/*1e6单位换算*/
}
void GravityCentre(double Density[],int Radius[],int Height[],int x[],int y[]){
  int i;
  double SumX=0,SumY=0,SumG=0.;
  float xc,yc;
  Gravity(Density,Radius, Height);  /*实参去掉g,n */
  for(i=0;i<n;i++){
    SumX+=x[i]*g[i];
    SumY+=y[i]*g[i];
    SumG+=g[i];		
  }
  xc=SumX/SumG;
  yc=SumY/SumG;
  printf("xc=%.1fmm  yc=%.1fmm\n",xc,yc);
}
int main(int argc, char** argv) {
  double D[]={7.874,8.96,4.54,7.44}; /*包裹密度数组*/
  int R[]={50,60,80,20};/*包裹底面积半径数组*/
  int H[]={100,200,800,500};/*包裹高度数组*/
  int x[]={-100,-150,50,105};  /*包裹重心x坐标*/
  int y[]={-100,75,50,-75};    /*包裹重心y坐标*/
  GravityCentre(D,R,H,x,y);/*包裹重心计算去掉了实参g*/    
  printf("g1=%.3lfN\ng2=%.3lfN\ng3=%.3lfN\ng4=%.3lfN",g[0],g[1],g[2],g[3]);      
  return 0;
}


