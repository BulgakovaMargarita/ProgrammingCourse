#include <stdio.h>
#include "strange_function.h"
#include "test.h"
#include "poisk_znacheniy.h"
#include "poisk_ugrozi.h"
#include "max_vozmojnoe.h"
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
        fact();
        return(0);
    }

    if(strcmp(argv[1], "--is-strange_function") == 0){
        strange();
        return(0);
    }

    if(strcmp(argv[1], "--is-max_vozmojnoe") == 0){
        max_vozmojnoe();
        return(0);
    }

    if(strcmp(argv[1], "--is-poisk_ugrozi") == 0){
        poisk_ugrozi();
        return(0);
    }
    if(strcmp(argv[1], "--is-zamena_elementov_mass") == 0){
        zamena_elementov_mass();
        return(0);
    }



return 0;
}



