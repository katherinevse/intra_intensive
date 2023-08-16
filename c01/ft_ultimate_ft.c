//Создайте функцию, которая принимает указатель на указатель на указатель на указатель на указатель на указатель на указатель на указатель на указатель на int в качестве параметра и устанавливает значение "42" для этого int.

#include <unistd.h>
#include <stdio.h>


void ft_putchar (char c) {

    write(1, &c, 1);
}

void ft_ultimate_ft(int *********nbr){
    *********nbr = 42;

}
    
int main (void) {
    	int nbr = 21;

        int *n =  &nbr;
        int **nu = &n;
        int ***num = &nu;
        int ****numb = &num;
        int *****numbe = &numb ;
        int ******number =&numbe;
        int *******numbers =&number;
        int ********numberss =&numbers;  


        printf("%d", nbr);

        ft_ultimate_ft(&numberss);
        printf("%d", nbr );


        return 0;
}

