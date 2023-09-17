#include "stdio.h"
int main() {
    char *str = NULL;
    str = "SCO";
    for (int i = 0; i < 3; i++) {
        printf("%c\n", *(str+i));
    }
    return 0;
}