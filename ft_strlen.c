//Bepaald de lengte van de gegeven input
#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int count;
	count = 0;
	while (str[count])
	{
		count++;
	}
	return (count);
}
