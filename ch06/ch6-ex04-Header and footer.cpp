#include<stdio.h>
#define PI 3.1415926 
double Gravity(double dDensity,double dRadius,double dHeight){
double dVolume;/*�ֲ�����*/ 
dVolume= PI * dRadius* dRadius* dHeight; 
return 9.8* dDensity* dVolume;  /*1kg=9.8N*/
}
void PrintHeader() {            /*����ҳü��Ϣ������void��ʾû�з���ֵ*/
  printf("������������\n");
}
void PrintFooter() {            /*����ҳ����Ϣ������void��ʾû�з���ֵ*/
  printf("������λ��ţ��\n");
}
int main(){
  double dD1=7.874, dD2=8.96, dD3=4.54, dD4=7.44;/*�����ܶ�*/
int iR1=50, iR2=60, iR3=80, iR4=20;/*����������뾶mm*/
int iH1=100, iH2=200, iH3=800, iH4=500;/*�����߶�mm*/
double dg1, dg2, dg3, dg4;/*��������*/
/*�����������㣬1000Ϊ��λ����*/
dg1=Gravity(dD1*1000., iR1/1000., iH1/1000.); 
dg2=Gravity(dD2*1000., iR2/1000., iH2/1000.);
dg3=Gravity(dD3*1000., iR3/1000., iH3/1000.);
dg4=Gravity(dD4*1000., iR4/1000., iH4/1000.);
  PrintHeader();                 /*�޲κ�������*/
  printf("dg1=%.3lfN\ndg2=%.3lfN\ndg3=%.3lfN\ndg4=%.3lfN\n",dg1,dg2,dg3,dg4);  
  PrintFooter();                /*�޲κ�������*/
  return 0; 
}


