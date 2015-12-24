void coefficient_of_equation(int x1, int x2, int x3, int* i_rez, int* j_rez, int* k_rez)
{
    int result1, result2, result3;
    int j;
    int i;
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
                            *i_rez = i;
                            *j_rez = j;
                            *k_rez = k;
                        }
                    }
                }
            }
        }
    }
}
