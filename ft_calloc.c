//
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	totalS;
	size_t	index;
	char	*result;

	totalS = (count * size);
	index = 0;
	result = malloc(totalS);
	if (result == NULL)
		return (NULL);
	while (index < totalS)
	{
		result[index] = 0;
		index++;
	}
	return (result);
}
