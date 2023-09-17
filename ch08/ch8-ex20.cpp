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
  printf("上合组织成员国信息：\n");
  while (pCountry != NULL) {
    printf("%10s: %7.3lf亿人  %7.2lf万平方公里\n", 
    pCountry ->cCName, 
    pCountry ->dPopulation, 
    pCountry ->dTerritorialArea);
    pCountry = pCountry ->next;
  }
}