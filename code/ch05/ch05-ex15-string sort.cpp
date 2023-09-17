#include <stdio.h>
#include <string.h>
#define MNUM 16
#define MLEN 20
int main()
{
    char strWords[MNUM][MLEN],strTmp[MLEN];
    int iNum=0,i,j,index;    
    printf("请输入待排序单词(以#作为结束):");
    scanf("%s",strTmp);
    for(i=0;strTmp[0]!='#';i++){
        strcpy(strWords[i],strTmp);
        iNum++;
        scanf("%s",strTmp);
    }
    for(i=0;i<iNum-1;i++){
        index=i;
        for(j=i+1;j<iNum;j++)
            if(strcmp(strWords[index],strWords[j])>0)
                index=j;
        strcpy(strTmp,strWords[i]);
        strcpy(strWords[i],strWords[index]);
        strcpy(strWords[index],strTmp);
    }
    for(i=0;i<iNum;i++)
        printf("%s ",strWords[i]);
    return 0;
}


