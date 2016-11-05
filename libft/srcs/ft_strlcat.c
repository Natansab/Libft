/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabbah <nsabbah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 18:10:19 by nsabbah           #+#    #+#             */
/*   Updated: 2016/11/05 18:10:19 by nsabbah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
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
