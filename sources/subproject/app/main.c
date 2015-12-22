#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "search_coefficients_of_equation_function.h"
#include "treat_to_king_of_chess_function.h"
#include "finding_max_composite_number_function.h"
#include "replacement_of_elements_in_array.h"
#include "main_menu.h"



int main(int argc, char* argv[])
{

       if(argc == 2){

        if(strcmp(argv[1], "--interactive") == 0){
            main_menu();
        }
    }


       if((strcmp(argv[1], "--is-max_vozmojnoe") == 0) && (argc>=4)){
        findings_max_composite_number(atoi(argv[3]),atoi(argv[4]));
        return(0);
    }

    if((strcmp(argv[1], "--is-poisk_ugrozi") == 0)&& (argc>=5)){
        treats_to_king_of_chess(atoi(argv[3]),atoi(argv[4]),atoi(argv[5]),atoi(argv[6]),atoi(argv[7]),atoi(argv[8]),atoi(argv[9]),atoi(argv[10]));
        return(0);
    }
    if(strcmp(argv[1], "--is-zamena_elementov_mass") == 0){
        replacement_of_elements_in_array();
        return(0);
    }



return 0;
}



