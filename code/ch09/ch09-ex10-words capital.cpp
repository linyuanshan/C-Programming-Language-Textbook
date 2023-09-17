#include <stdio.h>
#include <string.h>
#define M 200
#define ISLOWERCASE(c) ((c)>='a' && (c)<='z')
#define ISCAPITAL(c) ((c)>='A' && (c)<='Z')
int main()
{
    int flagNewWord=1,i;
    char strPara[M];
    printf("请输入段落：\n");
    gets(strPara);
    for(i=0;strPara[i]!='\0';i++)
    {
        if(flagNewWord==1){
            /*首字母情况*/
            if(ISLOWERCASE(strPara[i]))
                strPara[i]-=32;
            /*已经判断过首字母，将标记置为0*/
            flagNewWord=0;
        }
        else{
            /*非首字母情况*/
            if(ISCAPITAL(strPara[i]))
                strPara[i]+=32;
            /*非大小写字母时，将标记置1*/
            else if(!ISLOWERCASE(strPara[i]))
                flagNewWord=1;
        }
    }
    printf("调整后的段落为：\n");
    puts(strPara);
    return 0;
}


