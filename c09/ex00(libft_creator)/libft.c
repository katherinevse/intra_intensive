// libft.c
#include <unistd.h>
#include "libft.h" // важно 

void ft_putchar(char c) {
    write(1, &c, 1);
}

void ft_swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void ft_putstr(char *str) {
    while (*str != '\0') {
        write(1, str, 1);
        str++;
    }
}

int ft_strlen(char *str) {
    int length = 0;
    while (*str != '\0') {
        length++;
        str++;
    }
    return length;
}

int ft_strcmp(char *s1, char *s2) {
    while (*s1 == *s2) {
        if (*s1 == '\0')
            return 0;
        s1++;
        s2++;
    }
    return (*s1 - *s2);
}