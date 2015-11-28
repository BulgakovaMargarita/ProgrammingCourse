#include <stdio.h>
#include "Search_sum_or_difference_function.h"
#include "search_coefficients_of_equation_function.h"
#include "treat_to_king_of_chess_function.h"
#include "finding_max_composite_number_function.h"
#include "replacement_of_elements_in_array.h"
#include "main_menu.h"



int main(int argc, char* argv[])
{

    /// Тренировочный и отладочный код надо удалять
    printf(" \n argc =  %d \n", argc);

    int i;
    for(i =0; i< argc; i++)
        printf("\n %d value is  %s \n", i,  argv[i]);

    if(argc == 2){

        if(strcmp(argv[1], "--interactive") == 0){
            main_menu();
        }
    }

    ///  Здесь в каждой ветви было бы неплохо проверять, что argv[3] (и так далее) вообще существует,
    /// это можно узнать из переменной argc
    if(strcmp(argv[1], "--is-factorial") == 0){
        counting_factorial_function(argv[3]);
        return(0);
    }

    if(strcmp(argv[1], "--is-strange_function") == 0){
        sum_or_difference_function(argv[3],argv[4]);
        return(0);
    }

    if(strcmp(argv[1], "--is-max_vozmojnoe") == 0){
        finding_max_composite_number_function(argv[3],argv[4]);
        return(0);
    }

    if(strcmp(argv[1], "--is-poisk_ugrozi") == 0){
        treat_to_king_of_chess_function(argv[3],argv[4],argv[5],argv[6],argv[7],argv[8],argv[9],argv[10]);
        return(0);
    }
    if(strcmp(argv[1], "--is-zamena_elementov_mass") == 0){
        replacement_of_elements_in_array();
        return(0);
    }



return 0;
}



