#include <stdio.h>
#include <math.h>

int findings_max_composite_number(int m, int n){
    int max=0, n_ostatok_ot_del, n_zhelaya_chast, m_ostatok_ot_del, m_zhelaya_chast ;
    int i=0;
    while (n>0) {
            n_ostatok_ot_del= floor(fmod(n, 10));
            m_ostatok_ot_del= floor(fmod(m, 10));
            n_zhelaya_chast=floor(n/10);
            m_zhelaya_chast=floor(m/10);
            if(n_ostatok_ot_del>m_ostatok_ot_del)
                max=max+pow(10,i)*n_ostatok_ot_del;
            else
                max=max+pow(10,i)*m_ostatok_ot_del;
            i=i+1;
            n=n_zhelaya_chast;
            m=m_zhelaya_chast;
        }
    if (m>n)
    max=max+pow(10,i)*m;
        else
        max=max+pow(10,i)*n;


    return max;
}

