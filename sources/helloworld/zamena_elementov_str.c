#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
void zamena_elementov_str(){

    char *str;
    str=(char*)calloc(21,sizeof(char));
    puts("Введите строку");
    scanf("%s", str);
    //fgets(str, 30, stdin);
    puts(str);
    int n = strlen(str);
    printf("%i", n);
    int i;
    for (i = 0; i<=(n-3); i++){
        if (str[i]=='.')  {
            str[i+2]=toupper(str[i+2]);
            i=i+3;
        }

    }



    printf("%s\n",str);
    free (str);

}
