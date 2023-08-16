//strncat – объединение строк c ограничением длины добавляемой строки.
/*
Функция "strncat":
Функция "strncat" также используется для объединения строк, 
но с дополнительным ограничением на количество символов, 
которое будет скопировано из исходной строки в целевую строку. 
Она принимает три аргумента: целевую строку (destination), исходную строку (source) и максимальное количество символов для копирования (n).

пример:
char destination[20] = "Hello";
char source[] = " World!";
strncat(destination, source, 3);
printf("%s", destination); // Вывод: "Hello Wor"
*/

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, int nb)
{
	int i;
	int x;

	i = 0;
	x = 0;
	while (dest[i] != '\0')
		i++;
	while (src[x] != '\0' && x < nb)
	{
		dest[i] = src[x];
		i++;
		x++;
	}
	dest[i] = '\0';
	return (dest);
}




