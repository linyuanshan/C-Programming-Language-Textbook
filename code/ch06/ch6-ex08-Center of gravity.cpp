#include <stdio.h>
#define Pi 3.1415926
/*�������㺯��*/
void Gravity(double Density[],int Radius[],int Height[],double g[],int n){ 
  /* n��������*/
  int i;
  for(i=0;i<n;i++)
    g[i]=9.8*Density[i]*Pi*Radius[i]*Radius[i]*Height[i]/1e6;   /*1e6��λ����*/
}
/*ϵͳ���ļ��㺯��*/
void GravityCentre(double Density[],int Radius[],int Height[],double g[],int x[],
                int y[],int n) {
  int i;
  double SumX=0,SumY=0,SumG=0.;
  float xc,yc;
  Gravity(Density,Radius, Height,g,4); /*���ð���������������������Ϊʵ��*/
  for(i=0;i<n;i++){
    SumX+=x[i]*g[i];
    SumY+=y[i]*g[i];
    SumG+=g[i];		
  }
  xc=SumX/SumG;
  yc=SumY/SumG;
  printf("xc=%.1fmm  yc=%.1fmm\n",xc,yc);  /*ϵͳ�����������*/
}
int main() {
  double D[]={7.874,8.96,4.54,7.44}; /*4�������ܶ�����*/
  int R[]={50,60,80,20};/*4������������뾶����*/
  int H[]={100,200,800,500};/*4�������߶�����*/
  double g[4];/*4��������������*/ 
  int x[]={-100,-150,50,105};  /*4����������x����*/
  int y[]={-100,75,50,-75};    /*4����������y����*/
  GravityCentre(D,R,H,g,x,y,4);/*�������ļ��㣬��������Ϊʵ��*/    
  printf("g1=%.3lfN\ng2=%.3lfN\ng3=%.3lfN\ng4=%.3lfN",g[0],g[1],g[2],g[3]);      
  return 0;
}

