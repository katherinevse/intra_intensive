#include <stdio.h>
#include <string.h>
#include <unistd.h>

void ft_putchar (char c) {
    write(1, &c, 1);
}



int main() {
    char source[] = "Hello Worl";  // Исходная строка
    char destination[13];  // Буфер для копирования

    strncpy(destination, source, 12);  // Копирование максимум 12 символов из source в destination
    destination[12] = '\0';  // Добавляем нулевой символ в конец строки

    printf("Исходная строка: %s\n", source);
    printf("Скопированная строка: %s\n", destination);

    return 0;
}