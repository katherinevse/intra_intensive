/* - Создайте файл ft_point.h, который скомпилирует следующий файл 'main' :
**  Так же, ТУТ ВСЁ О "struct":
**                                              https://youtu.be/hoHAOTVRndc
**                                              https://youtu.be/6ooPdvzhhJw
**                          http://www.mir-koda.ru/full_leson_cpp.php?id=20
**                          http://www.mir-koda.ru/full_leson_cpp.php?id=21
**
**  ОБЯЗАТЕЛЬНО к ПРОЧТЕНИЮ:
**                          http://www.youngcoder.net/2015/01/structury1.html
**                                              https://prog-cpp.ru/c-struct/
**
**  Скомпилируй файл тест. В нем можно увидеть как работает эта функция вживую
**
** ************************************************************************** */

#ifndef FT_BOOLEAN_H
#define FT_BOOLEAN_H

typedef struct	s_point
{
	int x;
	int y;
}				t_point;


#endif



void	set_point(t_point *point)
{
    point->x = 42;
    point->y = 21;
}

int		main(void)
{
    t_point		point;

    set_point(&point);

    return (0);
}




