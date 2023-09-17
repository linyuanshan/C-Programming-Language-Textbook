#include <stdio.h>
#define M 20
int main()
{
    char strWord[M];
    int iCount[26]={0},i;
    printf("请输入一个单词：\n");
    scanf("%s",strWord);
    for(i=0;strWord[i]!='\0';i++)
        if(strWord[i]>='a' && strWord[i]<='z')
            /*找到字母strWord[i]对应下标累加*/
            iCount[strWord[i]-'a']++;
        else if(strWord[i]>='A'&&strWord[i]<='Z')
            iCount[strWord[i]-'A']++;
    printf("%s中出现的字符为：\n");
    for(i=0;i<26;i++)
        if(iCount[i]!=0)
            printf("%c:%d\n",i+'A',iCount[i]);
    return 0;
}


