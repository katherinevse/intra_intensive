// • Создайте функцию, которая выводит строку символов на стандартный вывод.


#include<stdio.h>
#include<unistd.h> // Для функции write
#include<string.h>

void ft_putchar (char c) {
    write(1, &c, 1);
}

void ft_putstr(char *str)
{
    int i = 0;
    while (str[i])
    {
        ft_putchar (str[i]);
        i++;
    }
}

int main() 
{
    char text[] = "HELLO";
    ft_putstr(text);
    printf("\n");
    return 0;
}