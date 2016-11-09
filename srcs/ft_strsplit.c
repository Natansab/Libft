#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

int word_count(char *s, char c)
{
  int i;
  int count;

  i = 0;
  count = 0;
  if (s[i] != c)
    count = 1;
  while (s[i])
  {
    if (s[i] == c && s[i + 1] != c && s[i + 1])
      count++;
    i++;
  }
  return (count);
}

char **ft_strsplit(char const *s, char c)
{
  char **ptr;
  int i;
  int j;
  int h;
  int k;
  int count;

  count = 0;
  if (s == NULL)
    return NULL;

  //printf("Nbre de mots : %d\n", count);
  ptr = (char **)malloc(sizeof(**ptr) * (count + 1));
  if (*ptr == NULL)
    return (NULL);
  i = 0;
  h = 0;
  while (s[i])
    {
      while (s[i] == c && s[i])
        i++;
      j = i;
      count = 0;
      k = 0;
      //printf("Mot n %d est a la position %d \n", k, i);
      while (s[j] != c && s[j])
        {
          count++;
          j++;
        }
      if(!(ptr[h] = (char *)malloc(sizeof(*ptr) * (count + 1))))
        return NULL;
      k = 0;
      while (i < j && s[i])
      {
        ptr[h][k] = s[i];
        i++;
        k++;
      }
      ptr[h][k] = '\0';
      h++;
    }
  ptr[h - 1] = NULL;
  //printf("%i\n", h );
  return (ptr);
}
