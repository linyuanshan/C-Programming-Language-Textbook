#include "stdio.h"
int main() {
  struct SCO {
    char cCName[50];
    double dPopulation;
    double dTerritorialArea;
    struct SCO *next;
  };
  struct SCO *head = NULL, country1 = {"China", 14.4349, 960}, 
  country2 = {"Uzbekistan", 0.347, 44.89}, *pCountry= NULL;
  head = &country1;
  country1.next = &country2;
  country2.next = NULL;
  pCountry = head;
  printf("�Ϻ���֯��Ա����Ϣ��\n");
  while (pCountry != NULL) {
    printf("%10s: %7.3lf����  %7.2lf��ƽ������\n", 
    pCountry ->cCName, 
    pCountry ->dPopulation, 
    pCountry ->dTerritorialArea);
    pCountry = pCountry ->next;
  }
}