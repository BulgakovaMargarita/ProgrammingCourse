
int strange_function(int first_number, int second_number)
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
void strange(){
    puts("Введите 2 числа через Enter");
    int first_number, second_number;
    scanf("%d", &first_number);
    scanf("%d", &second_number);
    int result;
    result = strange_function(first_number, second_number);
    printf("%d \n", result);
}


void fact(){
    int number;
    scanf("%d", &number);
    int result;
    result = fact_function(number);
    printf("%d \n", result);
}


