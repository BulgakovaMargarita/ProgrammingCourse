
int Search_sum_or_difference_function(int first_number, int second_number)
{
    if(first_number < second_number)
        return first_number + second_number;
    else
        return first_number - second_number;
}

int fact_function(int number)
{
    int result = 1;
    int i;
    for(i=1; i <= number; i++) { result *= i;}
    return result;
}
