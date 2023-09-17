#include "stdio.h"
#include "stdlib.h"
int main() {
  struct SCO {
    char cCName[50];
    double dPopulation;
    double dTerritorialArea;
    struct SCO *next;
  };
  struct SCO *head = NULL, *pnew = NULL, 
  *pprev = NULL, *pCountry = NULL;
  int n = 0;      //������
  pprev = pnew = (struct SCO *)malloc(sizeof(struct SCO));
  scanf("%s%lf%lf", pnew->cCName, &pnew->dPopulation, 
       &pnew->dTerritorialArea);
  while (pnew->dPopulation != 0) {
     n = n + 1;
     if (n == 1) {       //�����е�һ�����
       head = pnew; 
     }
     else {              //���������е�һ�����
       pprev->next = pnew;
     }
     pprev = pnew;
     pnew = (struct SCO *)malloc(sizeof(struct SCO));
     scanf("%s%lf%lf", pnew->cCName,&pnew->dPopulation,
     &pnew->dTerritorialArea);
  }
  pprev->next = NULL;
  free(pnew);
  pCountry = head;
  printf("�Ϻ���֯��Ա����Ϣ��\n");
  while (pCountry != NULL) {
  printf("%10s: %7.3lf����  %7.2lf��ƽ������\n", 
       pCountry->cCName, 
       pCountry->dPopulation, 
       pCountry->dTerritorialArea);
       pCountry = pCountry->next;
  }
  return 0;
}