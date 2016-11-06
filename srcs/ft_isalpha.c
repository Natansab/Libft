#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c > 'Z' && c < 'a') || c < 'A' || c > 'z')
		return (0);
	return (1);
}
