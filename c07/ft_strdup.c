// Reproduce the behavior of the function strdup (man strdup)


/*Функция strdup() возвращает указатель на новую строку, которая  
**         является дубликатом строки. Память для новой строки получается  
**         помощью malloc(3) и может быть освобождена с помощью free(3).   
**
** ВОЗВРАЩАЕМОЕ ЗНАЧЕНИЕ:
**         В случае успеха функция strdup() возвращает указатель на дубли- 
**         рованную строку. Он возвращает NULL, если недостаточно памяти,  
**         с errno, установленным, чтобы указать причину ошибки.           
**
**  ОШИБКИ:
**         Недостаточно памяти для размещения дублирующейся строки.
*/


#include <stdio.h>
#include <stdlib.h>

char *ft_strdup(const char *src) 
{
    if (src == NULL)
        return NULL;

    int lenght = 0;
    while (src[lenght] != '\0')
    {
        lenght++;
    }
    
    char * newStr = (char * ) malloc ((lenght+1) * sizeof (char));// вычисление памяти ((lenght+1) * sizeof (char))

    if (newStr == NULL) {
        return NULL; // Если выделение памяти не удалось, возвращаем NULL
    }

    for (int i = 0; i < lenght; i++)
    {
        newStr[i]= src[i];
        printf("src[%d] = %d\n", i, src[i]);// аскии таблица

    }
    
    return newStr;
}



int main() {

    char *original = "Hello"; // Исходная строка

    // Копируем исходную строку в новую строку с помощью ft_strdup
    char *duplicate = ft_strdup(original);

    if (duplicate == NULL) {
        printf("Ошибка выделения памяти.\n");
        return 1;
    }

    // Выводим исходную строку и ее копию
    printf("Исходная строка: %s\n", original);
    printf("Копия строки: %s\n", duplicate);

    // Освобождаем память, выделенную ft_strdup
    free(duplicate);

    return 0;
}

