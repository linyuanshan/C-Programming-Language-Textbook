#include "stdio.h"    
int main() {
  int num = 97;              //����int���ͱ���num������ֵ
  int *pointer_num = NULL;   //����ָ��int���͵�ָ�����pointer_num
  pointer_num = &num;      //Ϊpointer_num��ֵ����ָ��num
  printf("pointer_num��ַ:%p\n", &pointer_num);//���pointer_num��ַ
  printf("pointer_num��ֵΪ��%p\n", pointer_num);//���pointer_numֵ
  printf("num��ַ:%p,num��ֵ��%d\n",&num,num); //���num��ַ��ֵ
  return 0;
}

