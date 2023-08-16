#include <stdio.h>
#include "libft.h"

int main() {
    char str[] = "Hello, world!";
    
    ft_putchar('H');
    ft_putchar('\n');
    
    ft_putstr(str);
    ft_putchar('\n');
    
    printf("Length of the string: %d\n", ft_strlen(str));
    
    return 0;
}