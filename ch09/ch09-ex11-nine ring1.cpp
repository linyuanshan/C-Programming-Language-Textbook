#include <stdio.h>
/*��װn����*/
void NineRingIn(int n);
/*ж��n����*/
void NineRingOut(int n);
int main(){
    NineRingIn(5);
    return 0;
}
/*��װn����*/
void NineRingIn(int n){
    /*�ݹ����*/
    if(n==1) /*��װ1����ʱ*/
        printf("��װ��1��\n");
    else if(n==2) {/*��װ2����ʱ*/
        printf("��װ��1��\n");
        printf("������1����װ��2��\n");
    }
    /*�ݹ����*/
    else{        
        NineRingIn(n-1);     /*��װn-1����*/
        NineRingOut(n-2);    /*ж��n-2����*/
        printf("������%d����װ��%d��\n",n-1,n);         
        NineRingIn(n-2);     /*��װn-2����*/
    }
}
/*ж��n����*/
void NineRingOut(int n){
    if(n==1)  /*ж��1����*/
        printf("ж�µ�1��\n");
    else if(n==2){  /*ж��2����*/
        printf("������1��ж�µ�2��\n");
        printf("ж�µ�1��\n");
    }
    /*�ݹ����*/
    else{
        NineRingOut(n-2);   /*ж��n-2����*/
        printf("������%d��ж�µ�%d��\n",n-1,n);
        NineRingIn(n-2);    /*��װn-2����*/
        NineRingOut(n-1);   /*ж��n-1����*/
    }
}


