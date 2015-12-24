#include <stdio.h>

int treats_to_king_of_chesss(int king_x, int king_y, int rook1_x, int rook1_y, int rook2_x, int rook2_y, int rook3_x, int rook3_y){
    if ((king_x==rook1_x)||(king_y==rook1_y)){
        return 1;
}
    if ((king_x==rook2_x)||(king_y==rook2_y)){
        return 2;
    }

    if ((king_x==rook3_x)||(king_y==rook3_y)){
        return 3;
    }
    else
        return 0;

}


