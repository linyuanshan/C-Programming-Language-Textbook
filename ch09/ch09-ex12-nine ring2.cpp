#include <stdio.h>
int count; /*ȫ�ֱ�������¼��������*/
/*��װn����*/
void NineRingIn(int n);
/*ж��n����*/
void NineRingOut(int n);
int main(){
    NineRingIn(9);
    printf("��װ���������в���%d��\n",count);
    return 0;
}
/*��װn����*/
void NineRingIn(int n){
    if(n==1)
        count++;/*��װ1��������������1*/
    else if(n==2) 
        count+=2; /*��װ2��������������2*/
    else{
        NineRingIn(n-1);
        NineRingOut(n-2);
        count++;/*������n-1������n����װ������������1*/
        NineRingIn(n-2);
    }
}
/*ж��n����*/
void NineRingOut(int n){
    if(n==1)
        count++;/*ж��1��������������1*/
    else if(n==2)
        count+=2; /*ж��2��������������2*/
    else{
        NineRingOut(n-2);
        count++;   /*������n-1��ж�µ�n��������������1*/
        NineRingIn(n-2);
        NineRingOut(n-1);
    }
}


