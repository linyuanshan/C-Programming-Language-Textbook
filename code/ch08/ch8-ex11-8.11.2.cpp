#include "stdio.h"
#include "string.h"
int main() {
  char *cSCO[8] = {"China", "Russia", "Kazakhstan", 
                 "Kyrgyzstan", "Tajikistan", 
                 "Uzbekistan", "India", "Pakistan"}; 
  char *temp = NULL;
  int i = 0, j = 0, t = 0;
  for (; i < 7; i++) {
    t = i;
    for (j = i + 1; j < 8; j++) {
      if (strcmp(cSCO[t], cSCO[j]) > 0) {
	       t = j;
      }
    }
    if (t != i) {
     temp = cSCO[i];
     cSCO[i] = cSCO[t];
     cSCO[t] = temp;
    }
  }
  for (i = 0; i < 8; i++) {
    printf("%s\n", cSCO[i]);
  }
}