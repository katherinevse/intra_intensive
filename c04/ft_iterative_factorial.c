#include <stdio.h>

int ft_iterative_factorial(int nb) {

    if (nb < 0 || nb > 12) // предотвращения переполнения целочисленного типа int
    {
        return 0;
    }

    int result = 1;
   
    for (int i = 1; i <= nb; i++)
    {
        //printf("%d", i);
        result = result * i;

    }

    return result; // Возвращаем факториал числа

}

int main() {
    int number = 5;
    int factorial = ft_iterative_factorial(number);
    printf("Факториал числа %d равен %d\n", number, factorial);

    return 0;
}