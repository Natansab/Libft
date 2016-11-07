/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabbah <nsabbah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 22:16:10 by nsabbah           #+#    #+#             */
/*   Updated: 2016/11/07 22:35:55 by nsabbah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char* ft_strtrim(char const *s)
{
  size_t i;
  char *str;
  size_t start;
  size_t end;

  i = 0;
  if (s == NULL)
    return NULL;
  str = (char *)malloc(sizeof(*str) * (ft_strlen(s) + 1));
  if (str == NULL)
    return NULL;
  while (s[i] == ' ' || s[i] == ',' || s[i] == '\n' || s[i] == '\t')
      i++;
  start = i;
  i = ft_strlen(s) - 1;
  while (s[i] == ' ' || s[i] == ',' || s[i] == '\n' || s[i] == '\t')
    i--;
  end = i;
  i = 0;
  while (i < ft_strlen(s) - (end - start))
  {
    str[i] = s[start + i];
    i++;
  }
  str[i] = '\0';
  return (str);
}
