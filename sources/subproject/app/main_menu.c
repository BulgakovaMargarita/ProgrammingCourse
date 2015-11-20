#include <stdio.h>
#include "strange_function.h"
#include "poisk_znacheniy.h"
#include "poisk_ugrozi.h"
#include "max_vozmojnoe.h"
#include "zamena_elementov_mass.h"



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
            fact();
            break;
                } break;

    case 2:
         poisk();

        break;

    case 3:

            poisk_ugrozi();
            break;
    case 4:

            max_vozmojnoe();
             break;
    case 5:
        zamena_elementov_mass();

    }
}

