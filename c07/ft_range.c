/*   Create a function ft_range which returns an array ofints. This int array should contain all values between min and max.
• Min included - max excluded.
• Here’s how it should be prototyped :
• If minv ́alue is greater or equal to max’s value, a null pointer should be returned

- Создайте функцию 'ft_range', которая возвращает массив целых чисел. Этот массив 
целых чисел 'int' должен содержать все значения, которые находятся в диапазоне
от 'min' до 'max'.

- Само 'min' значение должно тоже содержаться в массиве чисел требуемого 
диапазона - а значение 'max' должно быть исключено.

-//Если значение 'min' больше или равно значению 'max', должен быть возвращен 
нулевой указатель( 'NULL' он же - '((void *)0)' )
Allowed functions : malloc

*/


int *ft_range(int min, int max)
{
    if (min >= max)
    {
        return ((void *)0);
    }
    
}