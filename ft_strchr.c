//Returns pointer when the first c is found all remainding characters till '\0'
#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int		index;
	char	*point;

	index = 0;
	point = (char*)str;
	while (*(point + index))
	{
		if (*(point + index) == c)
			return (point + index);
		index++;
	}
	if (c == '\0')
		return (point + index);
	return (0);
}
