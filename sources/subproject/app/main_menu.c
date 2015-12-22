#include <stdio.h>
#include "coefficients_of_equation.h"
#include "treat_to_king_of_chess.h"
#include "max_composite_number.h"
#include "replacement_of_elements_in_array.h"
#include "sentence_to_lower.h"



void main_menu()
{

    puts("1. Поиск коэффициентов");
    puts("2. Поиск угрозы королю от ладьи");
    puts("3. Составить из соответствующих чисел M и N наибольшое возможное число");
    puts("4. Замена значений элеметнов массива(работа с файлом)");
    puts("5. Перевод прописных букв текста в строчные(работа с файлом)");
    int choice;
    scanf("%d", &choice);
    switch (choice) {
    case 1:
        coefficients_of_equation();
        break;
    case 2:
        treat_to_king_of_chess();
        break;
    case 3:
        finding_max_composite_number();
        break;
    case 4:
        replacement_of_elements_in_array();
        break;
    case 5:
        sentence_to_lower();
        break;



    }
}

