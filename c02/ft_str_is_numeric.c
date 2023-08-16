//  Создайте функцию, которая возвращает 1, если строка,
//  заданная в качестве параметра, содержит только цифры,
//  и 0, если она содержит любой другой символ.


#include <unistd.h>
#include <stdio.h>



void ft_putchar(char c) {

    write(1, &c, 1);
}

int checkChar(char ch) {

    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        return 0; // переменная является буквой
    } else {
        return 1; // цифры
    }
}


int ft_str_is_alpha(char *str) {

    while (*str != '\0')  {
        // printf("%c-", *str);
        if (checkChar(*str) == 1) {
            return 1; 
        }
        str++;


    } 

    return 0;
}

int main() {

    char b[] = "He1lo";
    int result = ft_str_is_alpha(b);

    printf("%d",result);

}

