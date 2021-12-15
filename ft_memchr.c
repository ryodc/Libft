#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*point;
	unsigned char	character;
	size_t			index;

	point = (unsigned char*)str;
	character = (unsigned char)c;
	index = 0;
	while (index < n)
	{
		if (*(point + index) == character)
		{
			return (point + index);
		}
		index++;
	}
	return (0);
}
