#include "stdio.h"  
#include "string.h"  
int main() {
  char *cSCO[8] = {"China", "Russia", "Tajikistan", "Kyrgyzstan","Uzbekistan", 
                   "India", "Pakistan","Kazakhstan"};
  double dPopulation[8]={14.4349,1.44,0.098,0.06362,0.347,13.8,2.25,0.1839};
  double dTerritorialArea[8]={960,1709.82,14.31,19.99,44.89,298.0,79.6,272.9};
  char cSearch[50];
  double *pP,*pTA;
  int i,j;
  pP=dPopulation; //pPָ��dPopulation������׵�ַ
  pTA=dTerritorialArea; //pTAָ��dTerritorialArea������׵�ַ
  printf("���������ѯ�Ĺ�����\n");
  gets(cSearch);
  for(i=0;i<8;i++){
	if(strcmp(cSCO[i],cSearch)==0){
		printf("���ң�");
		puts(cSearch);
		printf("�˿ڣ�%lf��\n���������%lf��ƽ������\n",*(pP+i),*(pTA+i));
		break;
	 }
   }
  if(i==8)printf("����������\n");
  return 0;
}