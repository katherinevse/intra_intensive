/*
• We’re dealing with a program here, you should therefore have a function main in your .c file.
• Create a program that displays its given arguments.
• One per line, in the reverse order of the command line.
• It should display all arguments, except for argv[0].

  
**  - Здесь мы имеем дело с программой, поэтому в вашем файле '.c' должна быть 
**  функция 'main'.
**  - Создайте программу, которая отображает свои собственные аргументы
**  - По одному на строку в обратном порядке.
**  - Она должна отображать все аргументы, кроме 'argv[0]'
*/

#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

// int argc - кол-во аргументов
//char *argv[] - указатель на каждый аргумент, включая название программы 


int	main(int argc, char **argv)
{
    int i = argc - 1; // счетчик аргументов уменьшается
    while (i > 0)
    {
        printf("%s\n", argv[i]);
        i--;
    }

    return 0;
}
