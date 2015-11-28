#include "poisk_znacheniy2.h"

void poisk(){
    puts("Введите 3 значени х через Enter");
    int x1, x2, x3;
    scanf("%d", &x1);
    scanf("%d", &x2);
    scanf("%d", &x3);
    int i;
    i = poisk_i(x1,x2,x3);
    int j;
    j = poisk_j(x1,x2,x3);
    int k;
    k = poisk_k(x1,x2,x3);
    printf("%d \n", i);
    printf("%d \n", j);
    printf("%d \n", k);
}
