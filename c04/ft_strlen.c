//Создайте функцию, которая подсчитывает и возвращает количество символов в строке
#include<stdio.h>
#include <string.h>


int ft_strlen(char *str)
{
    int i = 0;

    while (str[i])
    {
        i++;
    }
    printf("%d", i);

    return i;
}

int main ()
{
    char strs[] = "Secret";
    ft_strlen(strs);
    //printf("Длина строки: %d\n", length);


}



/*

int main ()
{
    char strs[] = "Helloy";
    strlen(strs);


}


*/
