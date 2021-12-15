//
//n-- is not correct
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			index;
	unsigned char	*pointer1;
	unsigned char	*pointer2;

	pointer1 = (unsigned char*)dest;
	pointer2 = (unsigned char*)src;
	index = 0;
	if (pointer1 == NULL && pointer2 == NULL)
		return (NULL);
	if (pointer2 < pointer1)
	{
		while (++index <= n)
		{
			pointer1[n - index] = pointer2[n - index];
		}
	} 
	else
	{
		while (n-- > 0)
		{
			*(pointer1++) = *(pointer2++);
		}
	}
	return (dest);
}
