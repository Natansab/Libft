#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;

	if (!needle[0])
		return ((char*)haystack);
	while (haystack[i])
	{
		if (haystack[i] == needle[0])
		{
			while (haystack[i + j] == needle[j] && haystack[i + j] && (i + j) < len)
				j++;
			if (j == ft_strlen(needle) )
				return ((char*)haystack + i);
			j = 0;
		}
		i++;
	}
	return NULL;
}
