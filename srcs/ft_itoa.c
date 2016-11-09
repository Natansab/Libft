#include "libft.h"
#include <stdlib.h>

#include <stdio.h>
/*
int ft_size(int n)
{
  if (n / 10 == 0 && n % 10 == 0)
    return (0);
  else
    return (ft_size(n / 10) + 1);
}

char *ft_itoa(int n)
{
  char *str;

  if (n == 0)
    size = 1;
  else if (n < 0)
    size = ft_size(n) + 1;
  else
    size = ft_size(n);
  str = (char *)malloc(sizeof(*str) * (size + 1));
  if (!str)
    return NULL;
  if (n == 0)
      s[0] = 0;
  else if (n < 0)
    while()


  printf("valeur de size = %i", ft_size(n));
  return (str);
}*/









/*int ft_size(int n)
{
  int size;
  int nb;

  nb = n;
  if (n == 0)
    size = 1;
  else
  {
    size = 0;
    while (n != 0)
    {
      size++;
      n = n / 10;
    }
  }
  if (nb < 0)
    return (size + 1);
  //printf("nombre de chiffres : %i\n", size);
  return (size);
}

char *ft_itoa(int n)
{
  char *str;
  int size;
  int i;

  size = ft_size(n);
  str = (char *)malloc(sizeof(*str) * (size + 1));
  if (!str)
    return (NULL);

  if (n == 0)
  {
    str[0] = '0';
    str[1] = '\0';
    return (str);
  }
  i = 1;
  while (i <= size)
  {
    str[size - i] = n % 10 + '0';
  //  printf("le chiffre vaut %i\n", n % 10);
    n = n / 10;
    i++;
  }
  return (str);
}
*/
