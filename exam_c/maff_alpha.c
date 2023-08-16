/*
Assignment name  : maff_alpha
Expected files   : maff_alpha.c
Allowed functions: write
--------------------------------------------------------------------------------

Напишите программу, которая отображает алфавит с четными буквами в 
верхнем регистре и нечетными буквами в нижнем регистре, за которым следует 
новая строка.


Пример:

$> ./maff_alpha | cat -e
aBcDeFgHiJkLmNoPqRsTuVwXyZ$

*/

#include <stdio.h>

int main ()
{
    char i = 97; // ASCII код для 'a'
    int number = 0; // четной или нечетное? 
    
    while (i <= 122) 
    { 
        if (number % 2 == 0) 
        {
            printf("%c", i); // Выводим печатную (строчную) букву
        } else {
            printf("%c",i - 32); // Выводим заглавную (верхнюю) букв
        }
        i++;
        number++;
    }
    return 0;
}
