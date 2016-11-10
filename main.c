/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabbah <nsabbah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 14:02:58 by nsabbah           #+#    #+#             */
/*   Updated: 2016/11/10 19:23:25 by nsabbah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int main(void)
{
/*  char dst[10] = "hello";
  char src[20] = "bonjour";
  printf("%zu\n", ft_strlcat(dst, src, 8));*/
  //char b[10] = "123456789";
  //char c[10] = "hello";

  //printf("Dest vaut : %s\n", b + 3);
  //printf("%s\n", memmove(b, b + 3, 5));
/*  char dst1[] = "the cake is a lie !\0I'm hidden lol\r\n";
  char dst2[] = "the cake is a lie !\0I'm hidden lol\r\n";
  char src[] = "test basic !";
	char buff1[] = "the cake is a lie !\0I'm hidden lol\r\n";
	char buff2[] = "the cake is a lie !\0I'm hidden lol\r\n";

  printf("Resultat attendu : %s\n", __builtin___memccpy_chk (buff1, src, ' ', strlen(src), __builtin_object_size (buff1, 0)));
  printf("Resultat obtenu  : %s\n", ft_memccpy(dst2, src, ' ', 12));
*/
/*
  char s2[] = "hello comment ca va ?";
  char s1[] = "hellq comment ca va ?";
  printf("Resultat attendu : %d\n", memcmp(s1, s2, strlen(s1)));
  printf("Resultat obtenu  : %d\n", ft_memcmp(s1, s2, strlen(s1)));
*/

/*  char s1[] = "Hello World";
  printf(" Résultat obtenu  : %s\n", ft_strchr(s1, 72));
  printf(" Résultat attendu : %s\n", ft_strchr(s1, 72));
*/

/*  char haystack[] = "hello comment ca va";
  char needle[] = "comment";
  printf(" Résultat obtenu   : %s\n", ft_strnstr(haystack, needle, 11));
  printf(" Résultat attendu  : %s\n", strnstr(haystack, needle, 11));*/

/*  printf("Résultat obtenu    : %i\n", ft_atoi("    --4442"));
  printf("Résultat attendu   : %i\n", atoi("    --4442"));
  //printf("Résultat obtenu   : %i\n", toupper(115));*/
  //printf("Résultat obtenu    : %s", ft_strtrim("  \t \t \n   \n\n\n\t"));
  //int i;
  //i = 0;
  //while (*ft_strsplit("      split       this for   me  !       ", ' ')[i])
  //printf("%s", ft_strsplit("      split       this for   me  !       ", ' ')[5]);
  /*  printf("%s", ft_strsplit("      split       this for   me  !       ", ' ')[1]);
      printf("%s", ft_strsplit("      split       this for   me  !       ", ' ')[2]);
      printf("%s", ft_strsplit("      split       this for   me  !       ", ' ')[3]);
      printf("%s", ft_strsplit("      split       this for   me  !       ", ' ')[4]);
      printf("%s", ft_strsplit("      split       this for   me  !       ", ' ')[5]);
*/
//ft_strsplit("                  olol", ' ');
printf("Resultat obtenu : %s|\n", ft_itoa(0));
/*char *str = "the cake is a lie !\0I'm hidden lol\r\n";
char buff1[0xF00] = "there is no stars in the sky";
char buff2[0xF00] = "there is no stars in the sky";
size_t max = strlen("the cake is a lie !\0I'm hidden lol\r\n") + 4;
printf("Taille de cette chaine : %zu\n", strlen("the cake is a lie !\0I'm hidden lol\r\n"));
printf("ft_strlcat vaut : %zu\n", ft_strlcat(buff1, str, max));
printf("nouveau buff1 vaut : %s\n", buff1);
printf("strlcat vaut : %zu\n", strlcat(buff2,str, max));
printf("nouveau buff2 vaut : %s\n", buff2);
*/  return (0);
}
