#include <stdio.h>
#include "strange_function2.h"
#include "poisk_znacheniy2.h"
#include "poisk_ugrozi2.h"
#include "max_vozmojnoe2.h"
#include "zamena_elementov_mass.h"
#include "main_menu.h"



int main(int argc, char* argv[])
{
    printf(" \n argc =  %d \n", argc);

    int i;
    for(i =0; i< argc; i++)
        printf("\n %d value is  %s \n", i,  argv[i]);

    if(argc == 2){

        if(strcmp(argv[1], "--interactive") == 0){
            main_menu();
        }
    }

    if(strcmp(argv[1], "--is-factorial") == 0){
        fact(argv[3]);
        return(0);
    }

    if(strcmp(argv[1], "--is-strange_function") == 0){
        Search_sum_or_difference_function(argv[3],argv[4]);
        return(0);
    }

    if(strcmp(argv[1], "--is-max_vozmojnoe") == 0){
        max_vozmojnoe(argv[3],argv[4]);
        return(0);
    }

    if(strcmp(argv[1], "--is-poisk_ugrozi") == 0){
        poisk_ugrozi(argv[3],argv[4],argv[5],argv[6],argv[7],argv[8],argv[9],argv[10]);
        return(0);
    }
    if(strcmp(argv[1], "--is-zamena_elementov_mass") == 0){
        zamena_elementov_mass();
        return(0);
    }



return 0;
}



