//Kijkt of gegeven character in het alphabet zit
//zo ja geeft het 1 terug anders 0
#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
