// Create a recursive function that returns the factorial of the number given as a parameter
#include <stdio.h>

int ft_recursive_factorial(int nb) {
    if (nb < 0 || nb > 12) {
        return 0;
    }

    if (nb == 0) {
        return 1; // Базовый случай: факториал 0 равен 1
    } else {
        int check1 = nb * ft_recursive_factorial(nb - 1); // Рекурсивный вызов: умножаем число на факториал предыдущего числа
        printf("%d\n", check1);
        return check1;
        printf("%d\n", check1);
    }
}

int 	main(void)
{
	int r;

	r = ft_recursive_factorial(5);
	printf("%d", r);
	return (0);
}