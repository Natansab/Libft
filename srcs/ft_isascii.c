#include "libft.h"
#include <ctype.h>

int ft_isascii(int c)
{
	if (c >= 0 && c <= 0177)
		return (1);
	return (0);
}
