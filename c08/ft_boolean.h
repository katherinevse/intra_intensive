// Create a ft_boolean.h file. It’ll compile and run the following main appropriately
#ifndef FT_BOOLEAN_H
#define FT_BOOLEAN_H

# include <unistd.h>

#define TRUE 1
#define FALSE 0
#define SUCCESS 0

#define EVEN(x) ((x % 2) == 0) //odd or even 
#define EVEN_MSG "I have an even number of arguments.\n"
#define ODD_MSG "I have an odd number of arguments.\n"

#endif