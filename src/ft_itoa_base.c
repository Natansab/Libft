/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabbah <nsabbah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/08 17:21:47 by nsabbah           #+#    #+#             */
/*   Updated: 2017/01/10 16:20:27 by nsabbah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	ft_findchar(unsigned int value, int base, char *basestr)
{
	return (basestr[value % base]);
}

char		*ft_itoa_base(unsigned int value, int base, char *basestr)
{
	size_t			size;
	size_t			i;
	char			*tmp;

	size = ft_intlen_base(value, base);
	if (!(tmp = (char*)malloc(sizeof(char) * size + 1)))
		return (NULL);
	tmp[size] = '\0';
	if (!value)
		tmp[0] = '0';
	i = size - 1;
	while (value)
	{
		tmp[i] = ft_findchar(value, base, basestr);
		value = value / base;
		i--;
	}
	return (tmp);
}
