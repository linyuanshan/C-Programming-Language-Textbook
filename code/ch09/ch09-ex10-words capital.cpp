#include <stdio.h>
#include <string.h>
#define M 200
#define ISLOWERCASE(c) ((c)>='a' && (c)<='z')
#define ISCAPITAL(c) ((c)>='A' && (c)<='Z')
int main()
{
    int flagNewWord=1,i;
    char strPara[M];
    printf("��������䣺\n");
    gets(strPara);
    for(i=0;strPara[i]!='\0';i++)
    {
        if(flagNewWord==1){
            /*����ĸ���*/
            if(ISLOWERCASE(strPara[i]))
                strPara[i]-=32;
            /*�Ѿ��жϹ�����ĸ���������Ϊ0*/
            flagNewWord=0;
        }
        else{
            /*������ĸ���*/
            if(ISCAPITAL(strPara[i]))
                strPara[i]+=32;
            /*�Ǵ�Сд��ĸʱ���������1*/
            else if(!ISLOWERCASE(strPara[i]))
                flagNewWord=1;
        }
    }
    printf("������Ķ���Ϊ��\n");
    puts(strPara);
    return 0;
}


