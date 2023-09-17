#include "stdio.h"
int main() {
  char *cSCO[8] = {"China", "Russia", "Kazakhstan", 
                 "Kyrgyzstan", "Tajikistan", 
                 "Uzbekistan", "India", "Pakistan"}; 
  for (int i = 0; i < 8; i++) {
    printf("%s\n", cSCO[i]);
  }
}