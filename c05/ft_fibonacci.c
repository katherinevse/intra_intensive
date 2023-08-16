//• Создайте функцию ft_fibonacci, которая возвращает n-й элемент последовательности Фибоначчи, причем первый элемент имеет индекс 0.
// Будем считать, что последовательность Фибоначчи начинается так: 0, 1, 1, 2.
//• Overflows must not be handled, the function return will be undefined.

//0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ...


#include <stdio.h>

int ft_fibonacci(int index)
{  
    if (index == 0)
        return 0;
    else if (index<0)
        return -1;
    else if (index == 1)
        return 1;
    else
        return ft_fibonacci(index-1)+ ft_fibonacci(index-2);
}

int main (void)
{
    int number = 9;
    int result = ft_fibonacci(number);
    printf("Число Фибоначчи с индексом %d: %d\n", number, result);
    return 0;
}