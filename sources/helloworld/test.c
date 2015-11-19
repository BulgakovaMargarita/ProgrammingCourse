#include <stdio.h>
#include <stdlib.h>
#include "strange_function.h"
#include "test.h"
#include "poisk_znacheniy.h"
#include "poisk_ugrozi.h"

void automate_test(){
    test_strange_function();
    test_fact_function();
}

void test_fact_function(){
    puts("Автоматический тест для вычисления факториала");
    int number = 4;
    int result = fact_function(number);
    printf("Число: %d, Факториал: %d \n",number,result);
    test_result(5040, result);
}

void test_strange_function(){
    int first_number = 20;
    int second_number = 12;
    int result = strange_function(first_number, second_number);
    printf("Первое число: %d, Второе число : %d , Результат: %d \n", first_number, second_number, result);
    test_result(8, result);
    first_number = 7;
    second_number = 30;
    result = strange_function(first_number, second_number);
    printf("Первое число: %d, Второе число : %d , Результат: %d \n", first_number, second_number, result);
    test_result(37, result);
}

void test_result(int expected, int actual){
    if (expected == actual)
        puts("Ok");
    else
        puts("Test fail");
}

void automate_test_variant7_1(){
    test_poisk_variant7_1();
}

void test_poisk_variant7_1(){
    int x1 = 2;
    int x2 = 2;
    int x3 = 2;
    int i;
    i= poisk_i(x1,x2,x3);
    int j;
    j= poisk_j(x1,x2,x3);
    int k;
    k= poisk_k(x1,x2,x3);
    printf("x1: %d, x2 : %d, x3 : %d, i : %d, j : %d,k: %d \n", x1, x2, x3, i, j, k);
    test_result_variant7_1(73, i);
    test_result_variant7_1(-100, j);
    test_result_variant7_1(-100, k);

}

void test_result_variant7_1(int expected, int actual){
    if (expected == actual)
        puts("Ok");
    else
        puts("Test fail");
}
void poisk_variant7_1(){
    puts("Введите 3 числа");
    int x1, x2, x3;
    scanf("%d", &x1);
    scanf("%d", &x2);
    scanf("%d", &x3);
    int i;
    i = poisk_i(x1,x2,x3);
    int j;
    j = poisk_j(x1,x2,x3);
    int k;
    k = poisk_k(x1,x2,x3);
    printf("%d \n", i);
    printf("%d \n", j);
    printf("%d \n", k);
}

void automate_test_variant7_2(){
    test_poisk_variant7_2();
}

void test_poisk_variant7_2(){
    int x1 = 1;
    int x2 = 2;
    int y1 = 3;
    int y2 = 3;
    int z1 = 1;
    int z2 = 3;
    int a1 = 4;
    int a2 = 3;
    int result;
    if (x1==y1)
        result=1;
    if (x1==z1)
        result=2;
    if (x1==a1)
        result=3;
    if (x2==y2)
        result=1;
    if (x2==z2)
        result=2;
    if (x2==a2)
        result=3;
    printf("x1: %d, x2 : %d, Nomer ladii : %d \n", x1, x2, result);
    test_result_variant7_2(2, result);

}

void test_result_variant7_2(int expected, int actual){
    if (expected == actual)
        puts("Ok");
    else
        puts("Test fail");
}
void automate_test_max_vozmojnoe(){
    test_poisk_max_vozmojnoe();
}

void test_poisk_max_vozmojnoe(){
    int max=0, N=4157, M=8024, N_ostatok_ot_del, N_zhelaya_chast, M_ostatok_ot_del, M_zhelaya_chast ;
    int i=0;
    printf("N : %d, M : %d ", N, M);
    while (N>0) {
       N_ostatok_ot_del= floor(fmod(N, 10));
       M_ostatok_ot_del= floor(fmod(M, 10));
       N_zhelaya_chast=floor(N/10);
       M_zhelaya_chast=floor(M/10);
       if(N_ostatok_ot_del>M_ostatok_ot_del)
           max=max+pow(10,i)*N_ostatok_ot_del;
       else
           max=max+pow(10,i)*M_ostatok_ot_del;
       i=i+1;
       N=N_zhelaya_chast;
       M=M_zhelaya_chast;
    }
    printf("max : %d \n", max);
    test_result_max_vozmojnoe(8157, max);

}

void test_result_max_vozmojnoe(int expected, int actual){
    if (expected == actual)
        puts("Ok");
    else
        puts("Test fail");
}

void automate_test_zamena_elementov_mass(){
   test_poisk_zamena_elementov_mass();
}

void test_poisk_zamena_elementov_mass(){

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
   test_result_zamena_elementov_mass(p[i], p[i]);
   }

}

void test_result_zamena_elementov_mass(int expected, int actual){
    if (expected == actual)
        puts("Ok");
    else
        puts("Test fail");
}
