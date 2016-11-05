#include "libft.h"

void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
  size_t i;

  i = 0;
  while (i < n)
  {
    ((unsigned char*)dst)[i] = ((unsigned char*)src)[i];
    i++;
  }

  return (dst);
}
