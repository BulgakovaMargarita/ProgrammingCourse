#include "strange_function2.h"

void Search_sum_or_difference(){
    puts("Введите 2 числа через Enter");
    int first_number, second_number;
    scanf("%d", &first_number);
    scanf("%d", &second_number);
    int result;
    result = strange_function(first_number, second_number);
    printf("%d \n", result);
}


void fact(){
    int number;
    scanf("%d", &number);
    int result;
    result = fact_function(number);
    printf("%d \n", result);
}


