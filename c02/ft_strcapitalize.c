#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c){
    write(1,&c,1);
}

char *ft_strcapitalize(char *str) {
    int i = 0;

    for (; str[i]);
    {
        if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
    }
    return (str);
}

int main() {}