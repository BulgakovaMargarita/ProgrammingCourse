#include <stdio.h>
#include "treat_to_king_of_chess_function.h"

void treat_to_king_of_chess(){
    puts("Введите 8 цифр, обозначающих позиции короля и ладей, через клавишу Enter");
    /// ни о чем не говорящие имена для переменных
    int x1, x2, y1, y2, z1, z2, a1, a2;
    scanf("%d", &x1);
    scanf("%d", &x2);
    scanf("%d", &y1);
    scanf("%d", &y2);
    scanf("%d", &z1);
    scanf("%d", &z2);
    scanf("%d", &a1);
    scanf("%d", &a2);
    treat_to_king_of_chess_function(x1,x2,y1,y2,z1,z2,a1,a2);
}
