#include <stdio.h>
#define M 10
int main()
{
    int n,i,j,iMatrix[M][M]; 
    printf("请输入矩阵的阶数：");
    scanf("%d",&n);
    printf("请输入矩阵：\n");
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
        printf("该矩阵是对称矩阵\n");
    else
        printf("该矩阵不是对称矩阵\n");
    return 0;
}


