#include "stdio.h"
#include "string.h"
int main() {
  void sort(char *tcSCO[]);
  char *cSCO[8] = {"China", "Russia", "Kazakhstan", 
                  "Kyrgyzstan", "Tajikistan", 
                  "Uzbekistan", "India", "Pakistan"}; 
  int i = 0;
  sort(cSCO);   //数组名做函数的实参
  for (i = 0; i < 8; i++) {
    printf("%d: %s\n", i + 1, cSCO[i]);
  }
}
void sort(char *tcSCO[]){
  int i = 0, j = 0, t = 0;
  char *temp = NULL;
  for (; i < 7; i++) {
    t = i;
    for (j = i + 1; j < 8; j++) {
      if (strcmp(tcSCO[t], tcSCO[j]) > 0) {
        t = j;
      }
    }
    if (t != i) {
      temp = tcSCO[i];
      tcSCO[i] = tcSCO[t];
      tcSCO[t] = temp;
    }
  }
}