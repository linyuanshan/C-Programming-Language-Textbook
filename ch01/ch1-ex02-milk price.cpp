#include <stdio.h>  // ����Ԥ�����������ͷ�ļ�
int multiply (int m, int n);   // �Զ���˷�����multiply ()������
int main( ) { //������
 int unitPrice,count,totalPrice;   // �������壬�ֱ��ʾ���ۡ��������ܼ�
 printf("������ţ�̵��ۣ�");  // ���ţ�̼۸�������ʾ��Ϣ
 scanf("%d",&unitPrice);       // �������,����ţ�̵���
 printf("������ţ��������");   // ���ţ������������ʾ��Ϣ
 scanf("%d",&count);          // �������,����ţ������
 totalPrice =multiply (unitPrice,count); //���ú���multiply����ţ���ܼ�
 printf("ţ���ܼ�Ϊ��%d",totalPrice); //������
 return 0;
}
/*����Ϊ�Զ���multiply ()����,
ʵ�ּ����������ĳ˻���*/
int multiply (int m, int n){
  int total;
  total=m*n;              // �����������г˻�����
  return total;              // �����������ĺ�ֵ
}

