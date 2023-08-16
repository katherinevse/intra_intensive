#include <stdio.h>
#include "math_operations.h"

int main() {
    int a = 10, b = 5;

    int sum = add(a, b);
    int difference = subtract(a, b);
    int product = multiply(a, b);
    int quotient = divide(a, b);

    printf("Сумма: %d\n", sum);
    printf("Разность: %d\n", difference);
    printf("Произведение: %d\n", product);
    printf("Частное: %d\n", quotient);

    return 0;
}