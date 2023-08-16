/*
Assignment name  : ft_print_numbers
Expected files   : ft_print_numbers.c
Allowed functions: write
--------------------------------------------------------------------------------

Напишите функцию, которая отображает все цифры в порядке возрастания.
Ваша функция должна быть объявлена ​​следующим образом:

	void	ft_print_numbers(void);
 */


#include <unistd.h>
#include<stdio.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void	ft_print_numbers(void)
{
   int i = 0;
   for (int i = 0; i < 9; i++)
   {
      printf("%d", i);
   }
   
}

int main ()
{
   ft_print_numbers();
}


