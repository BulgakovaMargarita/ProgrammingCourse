#include <stdio.h>
#include <math.h>

/// Заглавные буквы в названии используются обычно для макросов или констант
int finding_max_composite_number_function(int M, int N){
    /// Опять транслитерация...
    int max=0, N_ostatok_ot_del, N_zhelaya_chast, M_ostatok_ot_del, M_zhelaya_chast ;
    int i=0,k;
    if (M>N) k=1; else k=0;
    /// Зачем такая сложная констурукция,
    /// почему не
    /// if(m > n) {
    /// ... здесь ветвь, которая у вас в case1
    /// }
    /// else{
    /// ... здесь ветвь, которая у вас в case2
    /// }
    switch (k) {

    /// Вам не видится здесь дичайшее дублирование кода?
    case 1: while (N>0) {
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
        max=max+pow(10,i)*M;
        /// В библиотеке не должно быть пользовательского взаимодействия
        printf("Максимальное число = %d",max);
        break;
    case 0: while (M>0) {
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
        max=max+pow(10,i)*N;
        /// В библиотеке не должно быть пользовательского взаимодействия
        printf("Максимальное число = %d",max);
        break;
    }
    return max;
}

