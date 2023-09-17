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
  int n = 0;      //结点计数
  pprev = pnew = (struct SCO *)malloc(sizeof(struct SCO));
  scanf("%s%lf%lf", pnew->cCName, &pnew->dPopulation, 
       &pnew->dTerritorialArea);
  while (pnew->dPopulation != 0) {
     n = n + 1;
     if (n == 1) {       //链表中第一个结点
       head = pnew; 
     }
     else {              //不是链表中第一个结点
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
  printf("上合组织成员国信息：\n");
  while (pCountry != NULL) {
  printf("%10s: %7.3lf亿人  %7.2lf万平方公里\n", 
       pCountry->cCName, 
       pCountry->dPopulation, 
       pCountry->dTerritorialArea);
       pCountry = pCountry->next;
  }
  return 0;
}