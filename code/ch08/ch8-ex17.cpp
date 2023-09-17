#include "stdio.h"  
#include "string.h"  
char *MaxPopulation(char *pcSCO[],double *pP){ //����˿�ͳ�ƺ���
  double MaxPop=*pP;
  int iMaxPop=0;
  int i;
  for(i=0;i<8;i++){
    if(*(pP+i)>MaxPop){
	      MaxPop=*(pP+i);
	      iMaxPop=i;
	    }
  }
  return pcSCO[iMaxPop];
}
char *MinPopulation(char *pcSCO[],double *pP){ //�����˿�ͳ�ƺ���
  double MaxPop=*pP;
  int iMaxPop=0;
  int i;
  for(i=0;i<8;i++){
 	if(*(pP+i)<MaxPop){
	      MaxPop=*(pP+i);
	      iMaxPop=i;
	    }
  }
  return pcSCO[iMaxPop];
}
char *MaxTerritorialArea(char *pcSCO[],double *pTA){ //������ͳ�ƺ���
  double MaxTA=*pTA;
  int iMaxTA=0;
  int i;
  for(i=0;i<8;i++){
	    if(*(pTA+i)>MaxTA){
	      MaxTA=*(pTA+i);
	      iMaxTA=i;
	    }
  }
  return pcSCO[iMaxTA];
}
char *MinTerritorialArea(char *pcSCO[],double *pTA){ //��С���ͳ�ƺ���
  double MinTA=*pTA;
  int iMinTA=0;
  int i;
  for(i=0;i<8;i++){
  	if(*(pTA+i)<MinTA){
	      MinTA=*(pTA+i);
	      iMinTA=i;
	    }
  }
  return pcSCO[iMinTA];
}
int Search(char *pcSCO[],char *pSearch){//��ѯ�������������±꺯��
  int i;
  for(i=0;i<8;i++){
	    if(strcmp(pcSCO[i],pSearch)==0)
	      return i;
  }
}
int main() {
  char *cSCO[8] = {"China", "Russia", "Tajikistan", "Kyrgyzstan","Uzbekistan",
                 "India", "Pakistan","Kazakhstan"}; 
  double dPopulation[8]={14.4349,1.44,0.098,0.06362,0.347,13.8,2.25,0.1839};
  double dTerritorialArea[8]={960,1709.82,14.31,19.99,44.89,298.0,79.6,272.9};
  char cSearch[50];
  printf("1 �˿����Ĺ���\n");
  printf("2 �˿����ٵĹ���\n");
  printf("3 ������Ĺ���\n");
  printf("4 �����С�Ĺ���\n");
  int n;
  char* (*pf)(char *pc[],double *p);    //����ָ������ָ�����
  scanf("%d",&n);
  switch(n){
	    case 1: pf=MaxPopulation;break;   
	    case 2: pf=MinPopulation;break;
	    case 3: pf=MaxTerritorialArea;break;
	    case 4: pf=MinTerritorialArea;break;
  }
  if(n==1||n==2){
    strcpy(cSearch,(*pf)(cSCO,dPopulation));
    printf("���ң�%s �˿ڣ�%lf��\n",
          cSearch,dPopulation[Search(cSCO,cSearch)]);
  }
  else{ 
    strcpy(cSearch,(*pf)(cSCO,dTerritorialArea));
    printf("���ң�%s �����%lf��ƽ������\n",cSearch,
          dTerritorialArea[Search(cSCO,cSearch)]);
  } 
  return 0;
}