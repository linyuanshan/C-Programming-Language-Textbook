#include <stdio.h>
int count; /*全局变量，记录操作次数*/
/*安装n个环*/
void NineRingIn(int n);
/*卸下n个环*/
void NineRingOut(int n);
int main(){
    NineRingIn(9);
    printf("安装九连环进行操作%d次\n",count);
    return 0;
}
/*安装n个环*/
void NineRingIn(int n){
    if(n==1)
        count++;/*安装1个环，操作数加1*/
    else if(n==2) 
        count+=2; /*安装2个环，操作数加2*/
    else{
        NineRingIn(n-1);
        NineRingOut(n-2);
        count++;/*借助第n-1环将第n环安装，操作次数加1*/
        NineRingIn(n-2);
    }
}
/*卸下n个环*/
void NineRingOut(int n){
    if(n==1)
        count++;/*卸下1个环，操作数加1*/
    else if(n==2)
        count+=2; /*卸下2个环，操作数加2*/
    else{
        NineRingOut(n-2);
        count++;   /*借助第n-1环卸下第n环，操作次数加1*/
        NineRingIn(n-2);
        NineRingOut(n-1);
    }
}


