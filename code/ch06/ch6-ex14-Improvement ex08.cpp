#include <stdio.h>
#define Pi 3.1415926
int n=4;       /*n����������ȫ�ֱ���*/
double g[4];   /*g�����������飺ȫ�ֱ���*/ 
void Gravity(double Density[],int Radius[],int Height[]){
/*ȥ��double g[],int n�Ķ���*/
  int i;
  for(i=0;i<n;i++)
    g[i]=9.8*Density[i]*Pi*Radius[i]*Radius[i]*Height[i]/1e6;/*1e6��λ����*/
}
void GravityCentre(double Density[],int Radius[],int Height[],int x[],int y[]){
  int i;
  double SumX=0,SumY=0,SumG=0.;
  float xc,yc;
  Gravity(Density,Radius, Height);  /*ʵ��ȥ��g,n */
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
  double D[]={7.874,8.96,4.54,7.44}; /*�����ܶ�����*/
  int R[]={50,60,80,20};/*����������뾶����*/
  int H[]={100,200,800,500};/*�����߶�����*/
  int x[]={-100,-150,50,105};  /*��������x����*/
  int y[]={-100,75,50,-75};    /*��������y����*/
  GravityCentre(D,R,H,x,y);/*�������ļ���ȥ����ʵ��g*/    
  printf("g1=%.3lfN\ng2=%.3lfN\ng3=%.3lfN\ng4=%.3lfN",g[0],g[1],g[2],g[3]);      
  return 0;
}


