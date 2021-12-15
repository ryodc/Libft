//copies from memory src till size n to the dest
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	index;

	index = 0;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (index < n)
	{
		*(unsigned char*)(dest + index++) = *(unsigned char*)(src++);
	}
	return (dest);
}
