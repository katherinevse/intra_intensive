// • Reproduce the behavior of the function strcat (man strcat)

/*
Функция "strcat":
Функция "strcat" используется для объединения (конкатенации) двух строк. 
Она принимает два аргумента: целевую строку (destination) и исходную строку (source).
Исходная строка будет добавлена в конец целевой строки. 
Функция "strcat" продолжает добавлять символы из исходной строки в целевую строку,
 пока не встретит символ конца строки ('\0') в исходной строке.
#include <stdio.h>
#include <string.h>

int main() {
   char destination[20] = "Hello, ";
   const char source[] = "world!";
   
   strcat(destination, source);
   
   printf("Результат: %s\n", destination);
   
   return 0;
}
*/
//Функция возвращает указатель на массив, в который добавлена строка (destination).
//co
// malloc

// char *ft_strcat(char *dest, char *src)
// {
    

// }

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
    int i = 0;
    int j = 0;

    while (dest[i]) 
    {
        i++;
    }

    while (src[j])
    {
        dest[i] = src[j];
        j++;
        i++;
    }
    return dest;
}


int main() 
{
    char destination[50] = "Hello, ";
    char source[] = "world!";
    ft_strcat(destination, source);
    printf("Результат: %s\n", destination);
    
    return 0;
}