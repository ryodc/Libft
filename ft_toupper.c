//Turns character lower case to upper case
#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c<= 'z')
		return (c - 32);
	return (c);
}
