#include "stdio.h"    
int main() {
  double dPopulation;         //�����˿ڱ���
  double dTerritorialArea;     //�����������
  double *pP,*pTA;           //��������ָ�����
  pP=&dPopulation;   //pPָ�����dPopulation
  pTA=&dTerritorialArea; //pTAָ�����dTerritorialArea
  printf("�������й��˿�(/��)\n");
  scanf("%lf",pP);       //ʹ��ָ�����pP�����˿�
  printf("�������й����(/��ƽ������)\n");
  scanf("%lf",pTA);     //ʹ��ָ�����pTA�������
  //ָ�����*pP,*pTA����dPopulation��dTerritorialArea
  printf("�й��˿�����:%lf��\n���������%lf��ƽ������\n",*pP,*pTA);
  return 0;
}

