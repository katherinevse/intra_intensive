#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr; // Объявляем указатель

    // Выделяем память под одно целочисленное значение
    ptr = (int *)malloc(sizeof(int));

    if (ptr == NULL) {
        printf("Не удалось выделить память.\n");
        return 1;
    }

    // Присваиваем значение указателю
    *ptr = 42;
    printf("Значение: %d\n", *ptr);

    // Освобождаем память, когда она больше не нужна
    free(ptr);

    return 0;
}
