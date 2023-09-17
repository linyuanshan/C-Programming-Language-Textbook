#include "stdio.h"
#include "stdlib.h"
struct SCO {
  char cCName[50];
  double dPopulation;
  double dTerritorialArea;
  struct SCO *next;
};
int main() {
  struct SCO *createLL();        //����������
  int printLL(struct SCO *h);   //����������
  SCO *head = NULL;
  head = createLL();
  printLL(head);
  return 0;
}
//��������createLL()
struct SCO *createLL() {
  struct SCO *head = NULL, *pnew = NULL, *pprev = NULL;
  int n = 0;
  pprev=pnew=(struct SCO *)malloc(sizeof(struct SCO));
  scanf("%s%lf%lf", pnew->cCName, &pnew->dPopulation, 
       &pnew->dTerritorialArea);
  while (pnew->dPopulation != 0) {
    n = n + 1;
    if (n == 1) {
      head = pnew; 
    }
    else {
      pprev->next = pnew;
    }
    pprev = pnew;
    pnew = (struct SCO *)malloc(sizeof(struct SCO));
    scanf("%s%lf%lf", pnew->cCName, &pnew->dPopulation, 
         &pnew->dTerritorialArea);
  }
  pprev->next = NULL;
  free(pnew);
  return head;
}
//�������()
int printLL(struct SCO *h) {
  printf("�Ϻ���֯��Ա����Ϣ��\n");
  while (h != NULL) {
    printf("%10s: %7.3lf����  %7.2lf��ƽ������\n", 
          h->cCName, 
          h->dPopulation, 
          h->dTerritorialArea);
    h = h->next;
  }
  return 0;
}