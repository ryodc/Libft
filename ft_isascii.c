//Kijkt of gegeven charachter in de ascii tabel zit
#include "libft.h"

int	ft_isascii(int c)
{
	if ((c <= 127) && (c >= 0))
		return (1);
	return (0);
}
