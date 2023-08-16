
#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c) {

    write (1,&c,1);
}



char	*ft_strupcase(char *str)
{	
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}



int main()
{
	char a[] = "google";
	
	printf("%s\n", ft_strupcase(a));
	return (0);
} 
