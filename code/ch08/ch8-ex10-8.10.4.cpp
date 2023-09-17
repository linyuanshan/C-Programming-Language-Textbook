#include "stdio.h"
int main() {
  char *str = "SCO";
  *(str+2) = '-'; 
  printf("str is£º %s\n", str);
  return 0;
}