#include <stdio.h>
#include <math.h>
#include "finding_max_composite_number_function.h"
void finding_max_composite_number(){
    puts("Введите числа M и N через Enter");
    int n2, m2;
    scanf("%d", &n2);
    scanf("%d", &m2);
    printf("%d",findings_max_composite_number(m2,n2));

}
