//compares the first n bytes of memory area str1 and memory area str2.
//Returns a value greater of less then zero when inequal
//n-- is not correct
#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char	*point1;
	unsigned char	*point2;
	size_t			index;

	point1 = (unsigned char *)str1;
	point2 = (unsigned char *)str2;
	index = 0;
	while (n-- > 0)
	{
		if (*(point1 + index) == *(point2 + index))
			index++;
		else
			return (*(point1 + index) - *(point2 + index));
	}
	return (0);
}
