#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
void sentence_to_lower(){

    FILE* in;
    FILE* out;
    in = fopen("input_file.txt", "r");
    out = fopen("output_file.txt", "w");

    char *str;
    str=(char*)calloc(3,sizeof(char));
    fgets(str[0], 1, in);
    fputs (str[0],out);
    int i=0;

    while (!feof(in)){
        fgets(str[0], 1, in);
        fgets(str[1], 1, in);
        fgets(str[2], 1, in);

        if ((str[0]!=".")||(str[1]!=".")||(str[2]!=".")) {
            fputs (tolower(str[0]),out);
            fputs (tolower(str[1]),out);
            fputs (tolower(str[2]),out);
        }
        else {
            if (str[0]=="."){
                fputs (str[0],out);
                fputs (str[1],out);
                fputs (str[2],out);
            }
            if (str[1]=="."){
                str[0]=str[1];
                fgets(str[1], 1, in);
                fgets(str[2], 1, in);
                fputs (str[0],out);
                fputs (str[1],out);
                fputs (str[2],out);
            }
            if (str[2]=="."){
                str[0]=str[2];
                fgets(str[1], 1, in);
                fgets(str[2], 1, in);
                fputs (str[0],out);
                fputs (str[1],out);
                fputs (str[2],out);
            }
        }
        i++;

    }


free (str);
fclose(in);
fclose(out);

}

