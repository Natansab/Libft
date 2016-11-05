#include "libft.h"

char  *ft_strndup(const char *s1, size_t n)
  {
    char *s2;
    int i;

    i = 0;
    s2 = (char *)malloc(sizeof (*s2) * (ft_strlen(s1) + 1));
    if (s2 == NULL)
      return NULL;
    while (s1[i] && i < n)
    {
      s2[i] = s1[i];
      i++;
    }
    s2[i] = '\0';
    return (s2);
  }
