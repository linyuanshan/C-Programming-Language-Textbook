#include <stdio.h>
void func(int a, int b) {
  if(a==b)
    printf("ÓÒ->×ó");
  else
    printf("×ó->ÓÒ");
}
int main(){
  int x=3,flag;
  func(x, ++x);
  return 0;
}


