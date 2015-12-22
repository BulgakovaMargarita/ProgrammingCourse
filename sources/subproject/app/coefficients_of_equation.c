#include <stdio.h>
#include "search_coefficients_of_equation_function.h"

void coefficients_of_equation(){
    puts("Введите 3 значени х через Enter");
    int x1, x2, x3;
    scanf("%d", &x1);
    scanf("%d", &x2);
    scanf("%d", &x3);
    int i;
    i = i_coefficient_of_equation(x1,x2,x3);
    int j;
    j = j_coefficient_of_equation(x1,x2,x3);
    int k;
    k = k_coefficient_of_equation(x1,x2,x3);
    printf("%d \n", i);
    printf("%d \n", j);
    printf("%d \n", k);
}
