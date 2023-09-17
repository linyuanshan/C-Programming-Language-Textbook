#include <stdio.h>
void NineRingIn(int n);
void NineRingOut(int n);
void NineRingIn(int n){
    static int countIn;    /*静态局部变量countIn累计记录安装环的次数 */
    if(n==1){
        countIn++;
        printf("第%d次安装：安装第1环\n",countIn);
    }
    else if(n==2){
        countIn++;
        printf("第%d次安装：安装第1环\n",countIn);
        countIn++;
        printf("第%d次安装：借助第1环安装第2环\n",countIn);
    }
    else{
        NineRingIn(n-1);
        NineRingOut(n-2);
        countIn++;
        printf("第%d次安装：借助第%d环安装第%d环\n",countIn,n-1,n);
        NineRingIn(n-2);
    }
}
void NineRingOut(int n){
    static int countOut;   /*静态局部变量countOut累计记录卸下环的次数 */
    if(n==1){
        countOut++;
        printf("第%d次解环：卸下第1环\n",countOut);
    }

    else if(n==2){
        countOut++;
        printf("第%d次解环：借助第1环卸下第2环\n",countOut);
        countOut++;
        printf("第%d次解环：卸下第1环\n",countOut);
    }
    else{
        NineRingOut(n-2);
        countOut++;
        printf("第%d次解环：借助第%d环卸下第%d环\n",countOut,n-1,n);
        NineRingIn(n-2);
        NineRingOut(n-1);
    }
}
int main(){
    NineRingOut(5);
    return 0;
}


