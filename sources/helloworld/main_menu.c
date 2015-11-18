#include <stdio.h>
#include "strange_function.h"
#include "test.h"
#include "poisk_znacheniy.h"
#include "poisk_ugrozi.h"
#include "max_vozmojnoe.h"
#include "zamena_elemetov_mass.h"
#include "zamena_elementov_str.h"


void main_menu()
{

    puts("1. Подсчет значения странным способом и факториала");
    puts("2. Поиск коэффициентов");
    puts("3. Поиск угрозы королю от ладьи");
    puts("4. Составить из соответствующих чисел M и N наибольшое возможное число");
    puts("5. Замена значений элеметнов массива");
    puts("6. Редактор строки");
    int choice;
    scanf("%d", &choice);
    switch (choice) {
    case 1:
        puts("1. Подсчёт значение странным способом");
        puts("2. Вычисление факториала");
        puts("3. Автоматический тест");
        int choice2;
        scanf("%d", &choice2);
        switch (choice2) {
        case 1:
            puts("Подсчет значения странным способом");
            strange();
            break;
        case 2: puts("Вычисление факториала");
            fact();
            break;
        case 3: puts("Автоматический тест");
            automate_test();

        } break;

    case 2:
        puts("Выберете вид теста");
        puts("1. Пользовательский тест");
        puts("2. Автоматический тест");
        int choice3;
        scanf("%d", &choice3);
        switch (choice3) {
        case 1:
            puts("Пользовательский тест");
            poisk();
            break;
        case 2: puts("Автоматический тест");
            automate_test_variant7_1();

        } break;

    case 3:
        puts("Выберете вид теста");
        puts("1. Пользовательский тест");
        puts("2. Автоматический тест");
        int choice4;
        scanf("%d", &choice4);
        switch (choice4) {
        case 1:
            puts("Пользовательский тест");
            poisk_ugrozi();
            break;
        case 2: puts("Автоматический тест");
            automate_test_variant7_2();

        } break;
    case 4:
        puts("Выберете вид теста");
        puts("1. Пользовательский тест");
        puts("2. Автоматический тест");
        int choice5;
        scanf("%d", &choice5);
        switch (choice5) {
        case 1:
            puts("Пользовательский тест");
            max_vozmojnoe();
            break;
        case 2: puts("Автоматический тест");
            automate_test_max_vozmojnoe();

        } break;
    case 5:
        puts("Выберете вид теста");
        puts("1. Пользовательский тест");
        puts("2. Автоматический тест");
        int choice6;
        scanf("%d", &choice6);
        switch (choice6) {
        case 1:
            puts("Пользовательский тест");
            zamena_elementov_mass();
            break;
        case 2: puts("Автоматический тест");
            automate_test_zamena_elementov_mass();
        } break;
    case 6:
        puts("Пользовательский тест");
        zamena_elementov_str();


    }
}

