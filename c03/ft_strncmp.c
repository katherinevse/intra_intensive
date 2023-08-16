#include<stdio.h>
#include<unistd.h>


int ft_strncmp(char *s1, char *s2, unsigned int n) {

    unsigned int	i = 0;

    while ((s1[i] || s2[i]) && (i < n)) /* Если не встретился символ конца строки в массивах и пока счетчик не дошел до n. */
	{
		if (s1[i] < s2[i])
			return (-1);
		if (s1[i] > s2[i])
			return (1);
		i++;
	}
	return (0);



}


int 	main(void)
{
   /* Сравниваемые строки */
   char str1[] = {"1234567890"};
   char str2[] = {"1234467890"};
  
   /* Сравниваем первые пять символов двух строк */
   if (ft_strncmp(str1, str2, 5) == 0)
      ft_putstr("Первые пять символов строк идентичны");
   else
      ft_putstr("Первые пять символов строк отличаются");

   return (0);
}