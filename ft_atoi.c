//
#include "libft.h"

int	ft_check(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' \
	|| c == '\v' || c == '\f' || c == '\r')
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *str)
{
	int					iter;
	unsigned long int	result;
	int					minus;

	result = 0;
	iter = 0;
	while (ft_check(str[iter]) == 1)
		iter++;
	if (str[iter] == '-' || str[iter] == '+')
	{
		if (str[iter] == '-')
			minus = -1;
		if (str[iter + 1] == '+' || str[iter + 1] == '-')
			return (0);
		++iter;
	}
	while (str[iter] >= '0' && str[iter] <= '9')
	{
		result *= 10;
		result += (int)str[iter] - '0';
		iter++;
	}
	if (minus == -1)
		result = (result - (result * 2));
	return (result);
}
