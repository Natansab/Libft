/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natansab <natansab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 14:01:59 by natansab          #+#    #+#             */
/*   Updated: 2016/11/06 14:02:16 by natansabbah      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
  size_t i;

  i = 0;
  while (i < n)
  {
    if (((unsigned char*)s1)[i] != ((unsigned char*)s2)[i])
      return (((unsigned char*)s1)[i] - ((unsigned char*)s2)[i]);
    i++;
  }
  return (0);
}
