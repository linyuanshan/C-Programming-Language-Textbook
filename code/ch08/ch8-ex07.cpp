#include "stdio.h"
int main() {
    int a[10] = {0};
    int *pa1 = NULL, *pa2 = NULL;
    pa1 = &a[7]; pa2 = &a[1];
    printf("%ld\n", pa1 - pa2);
    return 0;
}