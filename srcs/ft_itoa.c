/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabbah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 20:43:31 by nsabbah           #+#    #+#             */
/*   Updated: 2016/11/10 20:43:33 by nsabbah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

#include <stdio.h>

int ft_size(int n)
{
	int size;

	if (n == 0)
		return (1);
	size = 0;
	while (n != 0)
	{
		size++;
		n = n / 10;
	}
	return (size);
}


char *ft_itoa(int n)
{
	int i;
	int neg;
	char *str;
	int size;

	i = 0;
	neg = 0;
	if (n < 0)
		neg = 1;
	size = ft_size(n);
	//printf("size vaut : %i\n", size);
	if(!(str = (char *)malloc(sizeof(*str) * (size + neg + 1))))
		return NULL;

	if (neg)
	{
		str[0] = '-';
		n = - n;
		size++;
		//  printf("hello\n");
	}
	if (n == 0)
		str[0] = 0;
	printf("hello %c\n", str[0]);
	while (n)
	{
		str[size - i - 1] = n % 10 + '0';
		//printf("valeur de n mod 10 10 %i\n", n % 10);
		n = n / 10;
		i++;

	}
	str[size] = '\0';
	return (str);
}














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
