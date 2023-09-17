#include <stdio.h>
#include <string.h>
#define M 4
int main()
{
    int i;
    char poetin[7];
    char *poet[M]={"李白","杜甫","白居易","王维"};
    char *intr[M]={"字太白，号青莲居士，浪漫主义诗人，诗仙。",
             "字子美，一生颠沛流离，见证了唐王朝的由盛转衰，诗圣。",
             "字乐天，诗歌体裁广泛，形式多样，语言平易通俗。",
             "字摩诘，崇信佛教，诗中有画，画中有诗，诗佛。"};
    printf("请输入你要查询的诗人（输入不要有空格）：");
    scanf("%s",poetin);
    for(i=0;i<M;i++)
        if(strcmp(poet[i],poetin)==0) {
            printf("%s\n",intr[i]);
            break;
        }
    if(i==M)
        printf("对不起，你要查询的诗人不在我的记忆中……");
    return 0;
}


