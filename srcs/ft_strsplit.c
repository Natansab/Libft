/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabbah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 20:34:23 by nsabbah           #+#    #+#             */
/*   Updated: 2016/11/10 20:42:26 by nsabbah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

int word_count(char const *s, char c)
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

	if (!s)
		return (NULL);
	if(!(ptr = (char **)malloc(sizeof(char*) * (word_count(s, c) + 1))))
		return (NULL);
	i = 0;
	h = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		j = 0;
		while (s[i + j] != c && s[i + j])
			j++;
		ptr[h] = (char *)malloc(sizeof(char) * (j + 1));
		k = 0;
		j = j + i;
		while (i < j)
		{
			ptr[h][k] = s[i];
			i++;
			k++;
		}
		ptr[h][k] = '\0';
		if (h == word_count(s, c))
		{
			ptr[h] = NULL;
			return (ptr);
		}
		h++;
	}
	ptr[h] = NULL;
	return (ptr);
}
