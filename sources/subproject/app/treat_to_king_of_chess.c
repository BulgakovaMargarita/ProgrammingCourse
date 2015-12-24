#include <stdio.h>
#include "treat_to_king_of_chess_function.h"

void treat_to_king_of_chess(){
    puts("Введите 8 цифр, обозначающих позиции короля и ладей, через клавишу Enter");
    int king_x, king_y, rook1_x, rook1_y, rook2_x, rook2_y, rook3_x, rook3_y;
    scanf("%d", &king_x);
    scanf("%d", &king_y);
    scanf("%d", &rook1_x);
    scanf("%d", &rook1_y);
    scanf("%d", &rook2_x);
    scanf("%d", &rook2_y);
    scanf("%d", &rook3_x);
    scanf("%d", &rook3_y);
    printf("%d",treats_to_king_of_chesss(king_x,king_y,rook1_x,rook1_y,rook2_x,rook2_y,rook3_x,rook3_y));
}
