#include <stdio.h>
#include <stdlib.h>
void zamena_elementov_mass(){
   FILE *mf;
   mf=fopen("zamena.txt","r");
   int n, i=0;
   float *p;
   fscanf(mf,"%d \n",&n);
   p = (float *) malloc(n*sizeof(float));

   for (i = 0; i<=(n-1); i++){
       fscanf(mf,"%f\n",&p[i]);
   }

   fclose(mf);

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