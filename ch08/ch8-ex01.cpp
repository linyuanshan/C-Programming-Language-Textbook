#include "stdio.h"
int max(int a,int b){         //������a��b�����ֵ�ĺ���max
    return a>b?a:b;        //����a��b�е����ֵ
}  
int main() {
    char ch = 'a';          //����char���ͱ���ch������ֵ
    int num = 97;         //����int���ͱ���num������ֵ
    char cCName[50];     //����char�����������cCName
    printf("ch �ĵ�ַ:%p\n",&ch);  //���char���ͱ���ch���ڴ��ַ
    printf("num�ĵ�ַ:%p\n",&num); //���int���ͱ���num���ڴ��ַ
    printf("cCName����ĵ�ַ%p\n",cCName);//���char����cCName�ڴ��ַ

    return 0;
}

