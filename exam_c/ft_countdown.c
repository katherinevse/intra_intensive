/* 
Assignment name  : ft_countdown
Expected files   : ft_countdown.c
Allowed functions: write
--------------------------------------------------------------------------------
Напишите программу, которая отображает все цифры в порядке убывания, а затем 
печатает новую строку.

Пример:
gcc -o aff_a aff_a.c

$> ./ft_countdown | cat -e
9876543210$
$>


// int argc - кол-во аргументов
//char *argv[] - указатель на каждый аргумент, включая название программы */


#include <unistd.h>
#include<stdio.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int main()
{
    for (int i = 9; i > 0; i--)
    {
        write(1, &i, 1);
    }
    return 0;
}



// с шагом в 2 i = i-2 или i -=2;