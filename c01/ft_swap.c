//• Создайте функцию, которая меняет местами значения двух целых чисел, адреса которых вводятся в качестве параметров.


#include <stdio.h>
#include <unistd.h>


void ft_putchar (char c) {

    write(1, &c, 1);

}

void ft_swap(int *a, int *b) {
    int ab = *a;
    *a = *b;
    *b = ab;

}

int main (void) {

    int a = 21;
    int b = 56;

   
    printf("Исходные значения: a = %d, b = %d\n", a, b);

    ft_swap(&a, &b);
    
    //те же адреса, записанные в указателях
    // int *pa = &a;
    //int *pb = &b;

    printf("После обмена: a = %d, b = %d\n", a, b);

    return 0;
    

}