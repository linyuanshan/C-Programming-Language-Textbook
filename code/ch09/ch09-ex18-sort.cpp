#include <stdio.h>
void sort(int a[],int n,int (*cmp)(int a,int b));
int small(int a,int b);
int big(int a,int b);
int main()
{
    int i;
    int a[6]={78,94,82,63,98,84};
    printf("��С��������:");
    sort(a,6,big);
    for(i=0;i<6;i++)
        printf("%d ",a[i]);
    printf("\n�Ӵ�С����:");
    sort(a,6,small);
    for(i=0;i<6;i++)
        printf("%d ",a[i]);
    return 0;
}
void sort(int a[],int n,int (*cmp)(int a,int b))
{
    int i,j;
    int tmp;
    /*ð�ݷ�����*/
    for(i=0;i<n-1;i++)
        for(j=0;j<n-i-1;j++)
        /*ͨ���ص�����ȷ��a[j]��a[j+1]��ϵ*/
        if((*cmp)(a[j],a[j+1])){
            tmp=a[j];
            a[j]=a[j+1];
            a[j+1]=tmp;
        }
}
int small(int a,int b){
    /*��aС��b����1�����򷵻�0*/
    return a<b?1:0;
}
int big(int a,int b){
    /*��a����b����1�����򷵻�0*/
    return a>b?1:0;
}


