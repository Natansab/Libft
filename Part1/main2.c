#include <stdio.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
		char s1[20] = "hello";
		char s2[20] = "bonjour";
				printf("\n############## TEST strcat ##############\n\n");
				printf("%s\n",strcat(s1, s2));
				printf("%s\n",ft_strcat(s1, s2));

printf("\n");
return (0);
}
