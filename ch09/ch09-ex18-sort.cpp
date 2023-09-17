#include <stdio.h>
void sort(int a[],int n,int (*cmp)(int a,int b));
int small(int a,int b);
int big(int a,int b);
int main()
{
    int i;
    int a[6]={78,94,82,63,98,84};
    printf("从小到大排序:");
    sort(a,6,big);
    for(i=0;i<6;i++)
        printf("%d ",a[i]);
    printf("\n从大到小排序:");
    sort(a,6,small);
    for(i=0;i<6;i++)
        printf("%d ",a[i]);
    return 0;
}
void sort(int a[],int n,int (*cmp)(int a,int b))
{
    int i,j;
    int tmp;
    /*冒泡法排序*/
    for(i=0;i<n-1;i++)
        for(j=0;j<n-i-1;j++)
        /*通过回调函数确定a[j]和a[j+1]关系*/
        if((*cmp)(a[j],a[j+1])){
            tmp=a[j];
            a[j]=a[j+1];
            a[j+1]=tmp;
        }
}
int small(int a,int b){
    /*若a小于b返回1，否则返回0*/
    return a<b?1:0;
}
int big(int a,int b){
    /*若a大于b返回1，否则返回0*/
    return a>b?1:0;
}


