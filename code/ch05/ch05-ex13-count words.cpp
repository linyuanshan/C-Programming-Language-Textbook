#include <stdio.h>
#define M 500
int main()
{
    char strPara[M];
    int newWflag=1,iWordCount=0,i;
    int isLetter;
    printf("请输入段落：\n");
    gets(strPara);
    for(i=0;strPara[i]!='\0';i++){
        isLetter=strPara[i]>='A'&&strPara[i]<='Z'||strPara[i]>='a'&&strPara[i]<='z';
        if(!isLetter)
            newWflag=1;
        else if(isLetter&&newWflag==1){
            iWordCount++;
            newWflag=0;
        }
    }
    printf("文中出现了%d个单词\n",iWordCount);
    return 0;
}


