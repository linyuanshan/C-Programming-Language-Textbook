#include <stdio.h>
#define M 10
int main()
{
    int n,i,j,iMatrix[M][M]; 
    printf("���������Ľ�����");
    scanf("%d",&n);
    printf("���������\n");
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&iMatrix[i][j]);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
            if(iMatrix[i][j]!=iMatrix[j][i])
                break;
        if(j<n)
            break;
    }
    if(i>=n)
        printf("�þ����ǶԳƾ���\n");
    else
        printf("�þ����ǶԳƾ���\n");
    return 0;
}


