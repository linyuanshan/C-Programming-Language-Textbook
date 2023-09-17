#include <stdio.h>
#define M 500
int main()
{
    char strCode[M];
    int key;
    int i;
    printf("请输入秘钥：");
    scanf("%d",&key);
    getchar();/*读入key时，需要一个回车，这里把这个回车读入*/
    printf("请输入待解密的字符串以回车结束：\n");
    gets(strCode);
    for(i=0;strCode[i]!='\0';i++){
        /*小写字母的处理，将字符加秘钥*/
        if(strCode[i]>='a' && strCode[i]<='z'){
            strCode[i]+=key;
            /*累加完超过字母范围处理*/
            if(strCode[i]>'z')
                strCode[i]-=26;
            else if(strCode[i]<'a')
                strCode[i]+=26;
        }
        /*大写字母的处理，将字符加秘钥*/
        else if(strCode[i]>='A' && strCode[i]<='Z'){
            strCode[i]+=key;
            if(strCode[i]>'Z')
                strCode[i]-=26;
            else if(strCode[i]<'A')
                strCode[i]+=26;
        }
    }
    printf("解密后字符串为：\n");
    puts(strCode);
    return 0;
}


