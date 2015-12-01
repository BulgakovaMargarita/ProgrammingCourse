#include <stdio.h>
#include <stdlib.h>

/// не могу восстановить, что это должно быть за задание
void replacement_of_elements_in_array(){
   /// странное имя mf
   FILE *mf;
   /// в коде не должны быть зашиты имена файлов
   mf=fopen("zamena.txt","r");
   int n, i=0;
   /// p -- ни о чем не говорящее название
   float *p;
   fscanf(mf,"%d \n",&n);
   p = (float *) malloc(n*sizeof(float));

   for (i = 0; i<=(n-1); i++){
       fscanf(mf,"%f\n",&p[i]);
   }

   fclose(mf);

   /// Логика не отделена, что тут вообще должно происходить?
   p[0]=(p[0]+p[1])/2;
   p[n-1]=(p[n-2]+p[n-1])/2;

   for (i = 1; i<(n-1); i++){
      p[i]=(p[i-1]+2*p[i]+p[i+1])/4;
   }

   for (i = 0; i<=(n-1); i++){
       printf("%f\n",*(p+i));
   }

  free(p);
}
