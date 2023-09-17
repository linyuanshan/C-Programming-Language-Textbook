#include <stdio.h>
/*安装n个环*/
void NineRingIn(int n);
/*卸下n个环*/
void NineRingOut(int n);
int main(){
    NineRingIn(5);
    return 0;
}
/*安装n个环*/
void NineRingIn(int n){
    /*递归出口*/
    if(n==1) /*安装1个环时*/
        printf("安装第1环\n");
    else if(n==2) {/*安装2个环时*/
        printf("安装第1环\n");
        printf("借助第1环安装第2环\n");
    }
    /*递归调用*/
    else{        
        NineRingIn(n-1);     /*安装n-1个环*/
        NineRingOut(n-2);    /*卸下n-2个环*/
        printf("借助第%d环安装第%d环\n",n-1,n);         
        NineRingIn(n-2);     /*安装n-2个环*/
    }
}
/*卸下n个环*/
void NineRingOut(int n){
    if(n==1)  /*卸下1个环*/
        printf("卸下第1环\n");
    else if(n==2){  /*卸下2个环*/
        printf("借助第1环卸下第2环\n");
        printf("卸下第1环\n");
    }
    /*递归调用*/
    else{
        NineRingOut(n-2);   /*卸下n-2个环*/
        printf("借助第%d环卸下第%d环\n",n-1,n);
        NineRingIn(n-2);    /*安装n-2个环*/
        NineRingOut(n-1);   /*卸下n-1个环*/
    }
}


