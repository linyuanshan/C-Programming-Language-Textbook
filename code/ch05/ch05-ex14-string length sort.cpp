#include <stdio.h>
#include <string.h>
#define M 20
int main()
{
    char strA[M],strB[M],strC[M],strTmp[M];
    printf("ÇëÊäÈë×Ö·û´®A£º");
    gets(strA);
    printf("ÇëÊäÈë×Ö·û´®B£º");
    gets(strB);
    printf("ÇëÊäÈë×Ö·û´®C£º");
    gets(strC);
    if(strlen(strA)>strlen(strB)){
        strcpy(strTmp,strA);
        strcpy(strA,strB);
        strcpy(strB,strTmp);
    }
    if(strlen(strA)>strlen(strC)){
        strcpy(strTmp,strA);
        strcpy(strA,strC);
        strcpy(strC,strTmp);
    }
    if(strlen(strB)>strlen(strC)){
        strcpy(strTmp,strC);
        strcpy(strC,strB);
        strcpy(strB,strTmp);
    }
    printf("×Ö·û³¤¶È´ÓÐ¡µ½´óÎª£º\n");
    puts(strA);
    puts(strB);
    puts(strC);
    return 0;
}


