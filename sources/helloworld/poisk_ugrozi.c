#include "poisk_ugrozi2.h"

void poisk_ugrozi(){
    puts("Введите 8 цифр, обозначающих позиции короля и ладей, через клавишу Enter");
    int x1, x2, y1, y2, z1, z2, a1, a2,rez;
    scanf("%d", &x1);
    scanf("%d", &x2);
    scanf("%d", &y1);
    scanf("%d", &y2);
    scanf("%d", &z1);
    scanf("%d", &z2);
    scanf("%d", &a1);
    scanf("%d", &a2);
    rez= poisk_ugrozi2(x1,x2,y1,y2,z1,z2,a1,a2);
}
