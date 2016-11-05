#include "libft.h"

void *ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n)
{
  size_t i;

  i = 0;
  while (i < n && ((unsigned char*)src)[i + 1] != (unsigned char)c
      && ((unsigned char*)src)[i])
  {
    ((unsigned char*)dst)[i] = ((unsigned char*)src)[i];
    i++;
  }
  if (i == n)
    return NULL;
  return ((unsigned char*)(dst + i));
}
