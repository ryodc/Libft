//Kijkt of gegeven character een cijfer is van 0-9
//zo ja geeft het 1 terug anders 0
#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
