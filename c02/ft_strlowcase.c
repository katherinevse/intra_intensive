#include <stdio.h>
#include <unistd.h>


void ft_putchar(char c) {

    write (1,&c,1);
}

char *ft_strlowcase(char *str) {
    int i = 0;

    while (str[i]  != '\0') 
    {
        if (str[i] >= 'A' && str[i] <='Z')
            str[i] = str[i] + 32;
        i++;
    }

    return (str);
}

int main() {

    char letters[]= "HELLO";
    printf("%s\n", ft_strlowcase(letters));

    return 0;

    
}