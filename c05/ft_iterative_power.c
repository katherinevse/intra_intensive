//• Create an iterated function that returns the value of a power applied to a number. 
// An power lower than 0 returns 0. Overflows must not be handled

//Создайте итерируемую функцию, которая возвращает значение степени, примененной к числу.
// Степень ниже 0 возвращает 0. Переполнение не должно обрабатываться

//Функция ft_iterative_power должна быть итеративной и возводить число nb в заданную степень power.
// Если power меньше 0, функция должна вернуть 0, как было указано в задании.


#include <stdio.h>

int ft_iterative_power(int nb, int power) {
    if (power < 0)
        return 0;

    int result = 1;
    while (power > 0) {
        result =result  * nb;
        power--;
        
        printf("Результат %d\n",result);
        printf("Степень %d\n",power);
    }
    return result;
}

int main(void) {
    int a = 6;

    int result_a = ft_iterative_power(a, 3); // Возведение числа 'a' в степень 3
    printf("Result for a^3: %d\n", result_a); // Ожидаемый вывод: 125 (5^3)
    return 0;
}