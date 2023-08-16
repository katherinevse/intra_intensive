/*  - Здесь мы имеем дело с программой, поэтому в вашем файле '.c' должна быть 
**  функция 'main'.
**  - Создайте программу, которая отображает свои собственные аргументы.
**  - По одному на строку в том же порядке, что и в командной строке.
**  - Она должна отображать все аргументы, кроме эargv[0]'.
**  - Пример:
    $>./a.out test1 test2 test3
    test1
    test2
    test3
    $>
*/

#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

// int argc - кол-во аргументов
//char *argv[] - указатель на каждый аргумент, включая название программы 

int main(int argc, char *argv[])
{
    if (argc > 1) 
    {
        for (int i = 1; i < argc; i++)
        {
            printf("%s\n", argv[i]);
        }
    }
    return 0;
}



