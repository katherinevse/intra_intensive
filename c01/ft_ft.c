
// **  - Создайте функцию, которая принимает указатель на 'int' в качестве 
// **  параметра и задает значение "42" для этого 'int'.

#include <stdio.h>
#include <unistd.h>


void ft_putchar (char c) {

    write(1, &c, 1);

}

void ft_ft(int *nbr) { 
    *nbr = 42;				

}

int main (void) {
    	int nbr = 21;
        printf("%d", nbr );
        ft_ft(&nbr);
        printf("%d", nbr );



        return 0;
}