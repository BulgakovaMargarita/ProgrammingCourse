#include <stdio.h>
/// ни о чем не говорящие имена для переменных
/// и лучше сделать структуру для координат фигуры
int treats_to_king_of_chess(int king_x, int king_y, int y1, int y2, int z1, int z2, int a1, int a2){
    if (king_x==y1){
        /// Вместо не понятных кодов, пусть функция возвращает enum
        return 1;
}
    if (king_x==z1){
        return 2;
    }
    if (king_x==a1){
        return 3;
    }
    if (king_y==y2){
        return 1;
    }
    if (king_y==z2){
        return 2;
    }
    if (king_y==a2){
        return 3;
    }
    else
        return 0;
}


