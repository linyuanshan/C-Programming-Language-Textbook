#include "stdio.h"
int main() {
  char str[] = "SCO";
  str[2] = '-';
  printf("string is: %s\n", str);
  return 0;
}