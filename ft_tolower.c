//Turns charater to Upper case to lower case
#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c<= 'Z')
		return (c + 32);
	return (c);
}