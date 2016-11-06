#include <stdlib.h>
#include "libft.h"
#include <ctype.h>

int	ft_atoi(const char *str)
{
	int i;
	int neg;
	int count;

	neg = 1;
	i = 0;
	count = 0;
	while(str[i] <= ' ')
		i++;
	if ((str[i] == '+' || str[i] == '-') && !ft_isdigit(str[i + 1]))
		return (0);
	if (str[i] == '-')
		neg = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	if (!ft_isdigit(str[i]))
		return (0);
	while(ft_isdigit(str[i]))
	{
		count = count * 10 + str[i] - '0';
		i++;
	}
	return (count * neg);
}
