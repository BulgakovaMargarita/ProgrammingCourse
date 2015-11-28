#include <stdio.h>
#include <stdlib.h>
#include "Search_sum_or_difference_function.h"


#include "search_coefficients_of_equation_function.h"

#include "treat_to_king_of_chess_function.h"

#include "finding_max_composite_number_function.h"




void automate_test(){
    test_strange_function();
    test_fact_function();
}

void test_fact_function(){
    puts("Автоматический тест для вычисления факториала");
    int result = counting_factorial_function(4);
    printf("Число: 4, Факториал: %d \n",result);
    test_result(24, result);
}

void test_strange_function(){
    int result = strange_function(20, 12);
    printf("Первое число: 20, Второе число : 12 , Результат: %d \n", result);
    test_result(8, result);
    result = strange_function(7, 30);
    printf("Первое число: 7, Второе число : 30 , Результат: %d \n", result);
    test_result(37, result);
}

void test_result(int expected, int actual){
    if (expected == actual)
        puts("Ok");
    else
        puts("Test fail");
}

void automate_test_variant7_1(){
    test_poisk_variant7_1();
}

void test_poisk_variant7_1(){
    test_result_variant7_1(73, search_i_coefficient_of_equation_function(2,2,2));
    test_result_variant7_1(-100, search_j_coefficient_of_equation_function(2,2,2));
    test_result_variant7_1(-100, search_j_coefficient_of_equation_function(2,2,2));

}

void test_result_variant7_1(int expected, int actual){
    if (expected == actual)
        puts("Ok");
    else
        puts("Test fail");
}


void automate_test_variant7_2(){
    test_poisk_variant7_2();
}

void test_poisk_variant7_2(){
    int result;
    result = treat_to_king_of_chess_function(1,2,3,3,1,3,4,3);
    test_result_variant7_2(2, result);

}

void test_result_variant7_2(int expected, int actual){
    if (expected == actual)
        puts("Ok");
    else
        puts("Test fail");
}
void automate_test_max_vozmojnoe(){
    test_poisk_max_vozmojnoe();
}

void test_poisk_max_vozmojnoe(){

    test_result_max_vozmojnoe(8157, finding_max_composite_number_function(8024,4157));

}

void test_result_max_vozmojnoe(int expected, int actual){
    if (expected == actual)
        puts(" Ok");
    else
        puts(" Test fail");
}

void automate_test_zamena_elementov_mass(){
   test_poisk_zamena_elementov_mass();
}

void test_poisk_zamena_elementov_mass(){

   FILE *mf;
    mf=fopen("zamena.txt","r");
    int n, i=0;
    float *p;
   fscanf(mf,"%d \n",&n);
   p = (float *) malloc(n*sizeof(float));

   for (i = 0; i<=(n-1); i++){
       fscanf(mf,"%f\n",&p[i]);
    }

    fclose(mf);

    p[0]=(p[0]+p[1])/2;
    p[n-1]=(p[n-2]+p[n-1])/2;

    for (i = 1; i<(n-1); i++){
     p[i]=(p[i-1]+2*p[i]+p[i+1])/4;
    }
   for (i = 0; i<=(n-1); i++){
   test_result_zamena_elementov_mass(p[i], p[i]);
   }

}

void test_result_zamena_elementov_mass(int expected, int actual){
    if (expected == actual)
        puts("Ok");
    else
        puts("Test fail");
}
