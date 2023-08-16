// Создайте функцию, которая возвращает 1, если строка, заданная в качестве параметра, 
// содержит только прописные буквы алфавита, и 0, если она содержит любой другой символ.

#include <unistd.h>
#include <stdio.h>


void ft_putchar(char c) {

    write(1, &c, 1);
}


int checkChar(char ch) {
       if (ch >= 'a' && ch <= 'z') {
        return 1; // переменная является буквой
    } else {
        return 0; // цифры
    }
}


int ft_str_is_uppercase(char *str) {
    while (*str != '\0')  {
        // printf("%c-", *str);
        if (checkChar(*str) == 0) {
            return 0; 
        }
        str++;


    } 

    return 1;
}

int main() {

    char b[] = "hello";
    int result = ft_str_is_uppercase(b);

    printf("%d",result);

}

 
 