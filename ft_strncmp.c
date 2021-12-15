//vergelijk strings met elkaar tot aan groote van n
#include "libft.h"

int ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t index;

	index = 0;
	while (n > 0 && *str1 != '\0' && *str2 != '\0')
	{
		if (*str1 != *str2)
			break;
		str2++;
        str1++;
        index++;
		n--;
	}
	if (n == 0)
		return (0);
	return (*(unsigned char*)str1 - *(unsigned char*)str2);
}
