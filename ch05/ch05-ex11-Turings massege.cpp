#include <stdio.h>
#define M 500
int main()
{
    char strCode[M];
    int key;
    int i;
    printf("��������Կ��");
    scanf("%d",&key);
    getchar();/*����keyʱ����Ҫһ���س������������س�����*/
    printf("����������ܵ��ַ����Իس�������\n");
    gets(strCode);
    for(i=0;strCode[i]!='\0';i++){
        /*Сд��ĸ�Ĵ������ַ�����Կ*/
        if(strCode[i]>='a' && strCode[i]<='z'){
            strCode[i]+=key;
            /*�ۼ��곬����ĸ��Χ����*/
            if(strCode[i]>'z')
                strCode[i]-=26;
            else if(strCode[i]<'a')
                strCode[i]+=26;
        }
        /*��д��ĸ�Ĵ������ַ�����Կ*/
        else if(strCode[i]>='A' && strCode[i]<='Z'){
            strCode[i]+=key;
            if(strCode[i]>'Z')
                strCode[i]-=26;
            else if(strCode[i]<'A')
                strCode[i]+=26;
        }
    }
    printf("���ܺ��ַ���Ϊ��\n");
    puts(strCode);
    return 0;
}


