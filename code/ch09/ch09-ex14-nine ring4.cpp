#include <stdio.h>
void NineRingIn(int n);
void NineRingOut(int n);
void NineRingIn(int n){
    static int countIn;    /*��̬�ֲ�����countIn�ۼƼ�¼��װ���Ĵ��� */
    if(n==1){
        countIn++;
        printf("��%d�ΰ�װ����װ��1��\n",countIn);
    }
    else if(n==2){
        countIn++;
        printf("��%d�ΰ�װ����װ��1��\n",countIn);
        countIn++;
        printf("��%d�ΰ�װ��������1����װ��2��\n",countIn);
    }
    else{
        NineRingIn(n-1);
        NineRingOut(n-2);
        countIn++;
        printf("��%d�ΰ�װ��������%d����װ��%d��\n",countIn,n-1,n);
        NineRingIn(n-2);
    }
}
void NineRingOut(int n){
    static int countOut;   /*��̬�ֲ�����countOut�ۼƼ�¼ж�»��Ĵ��� */
    if(n==1){
        countOut++;
        printf("��%d�ν⻷��ж�µ�1��\n",countOut);
    }

    else if(n==2){
        countOut++;
        printf("��%d�ν⻷��������1��ж�µ�2��\n",countOut);
        countOut++;
        printf("��%d�ν⻷��ж�µ�1��\n",countOut);
    }
    else{
        NineRingOut(n-2);
        countOut++;
        printf("��%d�ν⻷��������%d��ж�µ�%d��\n",countOut,n-1,n);
        NineRingIn(n-2);
        NineRingOut(n-1);
    }
}
int main(){
    NineRingOut(5);
    return 0;
}


