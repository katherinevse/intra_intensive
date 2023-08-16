//Напиши функцию int *ft_intarray_duplicate(const int *arr, int size) которая будет принимать указатель 
//на массив целых чисел arr и его размер size,
// а затем создавать и возвращать копию этого массива.


#include <stdio.h>
#include <stdlib.h>


int *ft_intarray_duplicate(const int *arr, int size)
{
    if (arr == NULL || size <= 0)
        return NULL;
    
    int *newArr = (int *)malloc(size*(sizeof(int)));

    if (newArr == NULL)
        return NULL;

    for (int i = 0; i < size; i++)
    {
        newArr[i] = arr[i];
        printf("i = %d\n", i); // Вывод значения i на каждой итерации

    }
    
    return newArr;

}

int main() 
{
    // Пример использования функции ft_intarray_duplicate
    int arr[] = {1, 2, 3, 4, 5};
    int length = sizeof(arr) / sizeof(arr[0]);

    int *duplicateArr = ft_intarray_duplicate(arr, length);

    if (duplicateArr != NULL) {
        for (int i = 0; i < length; i++) {
            printf("%d ", duplicateArr[i]);
        }
        free(duplicateArr); // Не забудь освободить память после использования дубликата массива
    }

    return 0;
}