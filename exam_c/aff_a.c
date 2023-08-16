/* 
Assignment name  : aff_a
Expected files   : aff_a.c
Allowed functions: write
--------------------------------------------------------------------------------

Напишите программу, которая принимает строку и отображает в ней первый символ «а»,
за которым следует новая строка. 

Если в строке нет символов «а», программа просто 
записывает новую строку. 

Если количество параметров не равно 1, программа 
отображает «а», за которым следует новая строка.

Пример:
gcc -o aff_a aff_a.c

$> ./aff_a "abc" | cat -e
a$
$> ./aff_a "dubO a POIL" | cat -e
a$
$> ./aff_a "zz sent le poney" | cat -e
$
$> ./aff_a | cat -e
a$
 */

// int argc - кол-во аргументов
//char *argv[] - указатель на каждый аргумент, включая название программы 


#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(int argc, char *argv[])
{
    int i = 0;
    if (argc != 2)
    {
        ft_putchar('a');
        ft_putchar('\n');
    }
    else 
    {
        while (argv[1][i])
        {
            if (argv[1][i] == 'a')
            {
                ft_putchar('a'); 
                break;
            }
            i++; 
        }
        
        ft_putchar('\n');
    }

    return 0;
}




