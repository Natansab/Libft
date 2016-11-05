#include  "libft.h"

size_t ft_strlcat(char * restrict dst, const char * restrict src, size_t size)
{
  size_t i;
  int j;
  size_t h;

  h = 0;
  i = 0;
  j = ft_strlen(dst);

  while (src[i] && (i + j) < size)
  {
    dst[i + j] = src[i];
    i++;
  }
  dst[i + j] = '\0';

  while (h < size)
  {
    if (dst[h] == '\0')
      return (i + j);
    h++;
  }
  return (size);
}
