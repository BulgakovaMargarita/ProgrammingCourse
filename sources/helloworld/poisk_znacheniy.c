int poisk_i(int x1, int x2, int x3)
{
    int result1, result2, result3;
    int j;
    int i, i_rez;
    int k;
    for(i=-100; i <100 ; i++) {
        for(j=-100; j <100 ; j++) {
            for(k=-100; k <100 ; k++) {
                result1 = x1*x1*x1 + x1*x1*i+x1*j + k;
                result2 = x2*x2*x2 + x2*x2*i+x2*j + k;
                result3 = x3*x3*x3 + x3*x3*i+x3*j + k;
                if (result1 == 0) {
                    if(result2 == 0){
                        if (result3 == 0 )
                        {
                            i_rez = i;
                        }
                    }
                }
            }
        }
    }
    return i_rez;
}

int poisk_j(int x1, int x2, int x3)
{
    int result1, result2, result3;
    int j, j_rez;
    int i;
    int k;
    for(i=-100; i <100 ; i++) {
        for(j=-100; j <100 ; j++) {
            for(k=-100; k <100 ; k++) {
                result1 = x1*x1*x1 + x1*x1*i+x1*j + k;
                result2 = x2*x2*x2 + x2*x2*i+x2*j + k;
                result3 = x3*x3*x3 + x3*x3*i+x3*j + k;
                if (result1 == 0){
                    if (result2 == 0){
                        if (result3 == 0 )
                        {
                            j_rez = j;
                        }
                    }
                }
            }
        }
    }
    return j_rez;
}

int poisk_k(int x1, int x2, int x3)
{
    int result1, result2, result3;
    int j;
    int i;
    int k, k_rez;
    for(i=-100; i <100 ; i++) {
        for(j=-100; j <100 ; j++) {
            for(k=-100; k <100 ; k++) {
                result1 = x1*x1*x1 + x1*x1*i+x1*j + k;
                result2 = x2*x2*x2 + x2*x2*i+x2*j + k;
                result3 = x3*x3*x3 + x3*x3*i+x3*j + k;
                if (result1 == 0){
                    if (result2 == 0){
                        if (result3 == 0 )
                        {
                            k_rez = k;
                        }
                    }
                }
            }
        }
    }
    return k_rez;
}

void poisk(){
    puts("Введите 3 значени х через Enter");
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
