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
        fact(argc[3]);
        return(0);
    }

    if(strcmp(argv[1], "--is-strange_function") == 0){
        strange(argc[3],argc[4]);
        return(0);
    }

    if(strcmp(argv[1], "--is-max_vozmojnoe") == 0){
        max_vozmojnoe(argc[4],argc[4]);
        return(0);
    }

    if(strcmp(argv[1], "--is-poisk_ugrozi") == 0){
        poisk_ugrozi(argc[3],argc[4],argc[5],argc[6],argc[7],argc[8],argc[9],argc[10]);
        return(0);
    }
    if(strcmp(argv[1], "--is-zamena_elementov_mass") == 0){
        zamena_elementov_mass();
        return(0);
    }



return 0;
}



