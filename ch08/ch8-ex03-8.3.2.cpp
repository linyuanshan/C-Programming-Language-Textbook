#include "stdio.h"    
int main() {
  int num = 97;              //����int���ͱ���num������ֵ
  int *pointer_num;        //����ָ��int���͵�ָ�����pointer_num
  pointer_num = &num;    //Ϊpointer_num��ֵ����ָ��num
  printf("pointer_num��ֵΪ��%p\n", pointer_num);//���pointer_num
  printf("pointer_num��ָ��ı���ֵ��%d\n", *pointer_num); 
//���ָ�����pointer_num��ָ�������ֵ
  printf("num��ֵ:%d\n",num); //���num
  return 0;
}
