#include <stdio.h>
void func(int y){       
  static int num = 0; /*��̬�ֲ�����*/
  num++;
  printf("%d\n",num);
}
int main(){
  int x;
  for (x=1;x<=3; x++)
    func (x);
return 0; 
}


