/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabbah <nsabbah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 18:09:56 by nsabbah           #+#    #+#             */
/*   Updated: 2016/11/05 18:10:08 by nsabbah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memccpy(void *dst, const void *src, int c, size_t n)
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
