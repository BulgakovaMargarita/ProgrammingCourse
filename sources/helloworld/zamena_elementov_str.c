#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
void zamena_elementov_str(){
    char str[21];

    fscanf("%21s \n",&str);

    int n = strlen(str);
    int i;
    for (i = 0; i<=(n-3); i++){
        if (str[i]=='.')  {
            str[i+2]=toupper(str[i+2]);
            i=i+3;
        }

    }



    printf("%s\n",str);

}
