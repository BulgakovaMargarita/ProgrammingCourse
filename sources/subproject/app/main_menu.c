#include <stdio.h>
#include "Search_sum_or_difference.h"
#include "search_coefficients_of_equation.h"
#include "treat_to_king_of_chess.h"
#include "finding_max_composite_number.h"
#include "replacement_of_elements_in_array.h"



void main_menu()
{

    puts("1. Подсчет значения странным способом и факториала");
    puts("2. Поиск коэффициентов");
    puts("3. Поиск угрозы королю от ладьи");
    puts("4. Составить из соответствующих чисел M и N наибольшое возможное число");
    puts("5. Замена значений элеметнов массива");
    int choice;
    scanf("%d", &choice);
    switch (choice) {
    case 1:
        puts("1. Подсчёт значение странным способом");
        puts("2. Вычисление факториала");
        int choice2;
        scanf("%d", &choice2);
        switch (choice2) {
        case 1:
            puts("Подсчет значения странным способом");
            Search_sum_or_difference();
            break;
        case 2: puts("Вычисление факториала");
            counting_factorial();
            break;
                } break;

    case 2:
         search_coefficients_of_equation();

        break;

    case 3:

            treat_to_king_of_chess();
            break;
    case 4:

            finding_max_composite_number();
             break;
    case 5:
        replacement_of_elements_in_array();

    }
}

