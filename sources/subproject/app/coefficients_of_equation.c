#include <stdio.h>
#include "search_coefficients_of_equation_function.h"

void coefficients_of_equation(){
    puts("Введите 3 значени х через Enter");
    int x1, x2, x3;
    scanf("%d", &x1);
    scanf("%d", &x2);
    scanf("%d", &x3);
    int i;
    int j;
    int k;
    coefficient_of_equation(x1,x2,x3, &i, &j, &k);
    printf("%d \n", i);
    printf("%d \n", j);
    printf("%d \n", k);


}
