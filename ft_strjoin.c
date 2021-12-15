//
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
    char	*str;
	size_t	i;
	size_t	x;

	str = (char*)malloc(sizeof(*s1) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str)
		return (NULL);
	i = 0;
	x = 0;
	while (s1[i])
	{
		str[x++] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
	{
		str[x++] = s2[i];
		i++;
	}
	str[x] = 0;
	return (str);
}