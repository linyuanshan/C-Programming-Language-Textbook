#include <stdio.h>
int Coding(int pw,int key){
    return pw^key;
}
int main(){
    int password,key;
    printf("\n**************Encrypt*****************\n");
    printf("input your password:");
    scanf("%d",&password);
    printf("input your key:");
    scanf("%d",&key);
    printf("The encrypted password is %d\n",Coding(password,key));
    printf("\n**************Decrypt*****************\n");
    printf("input your code:");
    scanf("%d",&password);
    printf("input your key:");
    scanf("%d",&key);
    printf("The password is %d\n",Coding(password,key));
    return 0;
}


