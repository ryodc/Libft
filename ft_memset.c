//Vervangt tot aan n met c, Returned 1e argument
//n-- is not correct
#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char *point;

	point = (unsigned char*)str;
	while (n--)
	{
		*(point++) = (unsigned char)c;
	}
	return (str);
}
