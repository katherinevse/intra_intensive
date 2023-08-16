//Напиши функцию compute_sum, которая принимает указатель на массив целых чисел и его размер, 
//а затем вычисляет и возвращает сумму всех элементов массива.


#include <stdio.h>


int compute_sum(const int *arr, int size) 
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", arr[i]);
        sum =sum + arr[i];
    }
    return sum;
}

int main()
{
    int arrs[] = {5, 0, 5 };
    int size = sizeof(arrs) / sizeof(int);

    int result = compute_sum(arrs,size);
    printf("Sum of array elements: %d\n", result);

    return 0;

}