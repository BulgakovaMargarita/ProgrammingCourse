#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
void sentence_to_lower(){
    int pointer_dot=1;
    FILE* in;
    FILE* out;

    char in_file[500];
    gets(in_file);
    in=fopen(in_file,"r");

    gets(in_file);
    out=fopen(in_file,"r");

    char str;
    char ch = '.';


    while (!feof(in)){
        str=fgetc(in);
        if (pointer_dot==1) fputc(str,out);
                else
              fputc(tolower(str),out);
        pointer_dot=0;
        if (strcmp (str,ch)==0) pointer_dot=1;


    }


    fclose(in);
    fclose(out);

}

