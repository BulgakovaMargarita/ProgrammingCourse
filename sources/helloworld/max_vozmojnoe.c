#include <math.h>
void max_vozmojnoe(){
    puts("Введите числа M и N через Enter");
    int max=0, N, M, N_ostatok_ot_del, N_zhelaya_chast, M_ostatok_ot_del, M_zhelaya_chast ;
    int i=0,k;
    scanf("%d", &N);
    scanf("%d", &M);
    if (M>N) k=1; else k=0;
    switch (k) {
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
        printf("Максимальное число = %d",max);
        break;
    }
}
