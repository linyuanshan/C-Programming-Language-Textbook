#include <stdio.h>
void func(int a, int b) {
  if(a==b)
    printf("��->��");
  else
    printf("��->��");
}
int main(){
  int x=3,flag;
  func(x, ++x);
  return 0;
}


