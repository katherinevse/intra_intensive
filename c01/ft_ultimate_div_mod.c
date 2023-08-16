//Эта функция делит параметры a на b. 
//Результат этого деления сохраняется в int, на который указывает a.
//Остаток от деления хранится в int, на который указывает b.
//не разобрана задача!!!!!!

#include <stdio.h>
#include <unistd.h>


void ft_putchar (char c) {

    write(1, &c, 1);

}

void ft_ultimate_div_mod(int *a, int *b) {


    int* pointera = &x; 
    int* pointerb = &y; 

    int result = *pointer_a / *pointer_b;
    
}

int main(void){
    int a = 10;
    int b = 2;
    int pointer_a;
    int pointer_b;

    ft_ultimate_div_mod(&a, &b);

    printf("Division: %d\n",pointer_a );
    printf("Modulus: %d\n", pointer_b);

    return 0;

}