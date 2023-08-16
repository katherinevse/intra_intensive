// Reproduce the behavior of the function strstr (man strstr).
//strstr
#include <stdio.h>
#include <string.h>

char *ft_strstr(char *str, char *to_find)
{
    int	i = 0;

    int b = 0;

	while (str[i] != '\0' && to_find[b] != '\0') // пока не конец строки
	{
		if (str[i] == to_find[b])
            printf("%s", "Буквы равны ");
		i++;
        
	}
	return 0;

}


int main() { 
    const char haystack[] = "Hello, world!";
    const char needle[] = "world";
    
    char* result = ft_strstr(haystack, needle);
    
    if (result != NULL) {
        printf("Подстрока найдена: %s\n", result);
    } else {
        printf("Подстрока не найдена.\n");
    }
    
    
    
    return 0;
}