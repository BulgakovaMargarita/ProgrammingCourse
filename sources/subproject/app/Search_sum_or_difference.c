#include "Search_sum_or_difference_function.h"

void Search_sum_or_difference(){
    puts("Введите 2 числа через Enter");
    int first_number, second_number;
    scanf("%d", &first_number);
    scanf("%d", &second_number);
    int result;
    result = sum_or_difference_function(first_number, second_number);
    printf("%d \n", result);
}


void counting_factorial(){
    int number;
    scanf("%d", &number);
    int result;
    result = counting_factorial_function(number);
    printf("%d \n", result);
}

