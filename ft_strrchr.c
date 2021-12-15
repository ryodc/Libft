//Returns pointer when the last c is found, all remainding characters till '\0'
#include "libft.h"

char *ft_strrchr(const char *str, int c)
{
	int		index;
	char	*point;
    char    *point2;

	index = 0;
	point = (char*) str;
    point2 = 0;

	while (*(point + index))
	{
		if (*(point + index) == c)
			point2 = point + index;
		index++;
	}
	if (c == '\0')
		return (point + index);
	return (point2);

}