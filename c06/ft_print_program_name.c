/* - Здесь мы имеем дело с программой, поэтому в вашем файле '.c' должна быть функция 'main'.
- Создайте программу, которая отображает свое собственное имя.
- Пример:
    $>./a.out
    ./a.out
    $>
*/

#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

// int argc - кол-во аргументов
//har *argv[] - указатель на каждый аргумент, включая название программы 

/*
int main(int argc, char *argv[])
{
    if (argc > 1) 
    {
        for (int i = 1; i < argc; i++)
        {
            printf("%s\n", argv[1]);
        }
    }
    return 0;
}

*/

//или

#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc > 1) 
    {
        printf("%s\n", argv[0]);
    }
    return 0;
}

