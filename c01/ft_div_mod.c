//Создайте функцию ft_div_mod по такому прототипу
//void ft_div_mod(int a, int b, int *div, int *mod);
//Эта функция делит параметры a на b и сохраняет результат в int, на который указывает div. Он также хранит остаток от деления a на b в int, на который указывает mod.

#include <stdio.h>
#include <unistd.h>


void ft_putchar (char c) {

    write(1, &c, 1);

}


void ft_div_mod(int a, int b, int *div, int *mod){

    *div = a/b;
    *mod = a%b;
}

int main(void){

    int a = 30;
    int b = 2;
    int dgr;
    int rmd;
   

    ft_div_mod(a,b,&dgr,&rmd);
    printf("Division: %d\n", dgr);
    printf("Modulus: %d\n", rmd);
   
    return 0;
}