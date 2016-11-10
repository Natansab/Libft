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
	//printf("le nombre de mots vaut : %i\n", count);
	return (count);
}

char **ft_strsplit(char const *s, char c)
{
	char **ptr;
	int i;
	int j;
	int h;
	int k;
	// On alloue nb de mot + 1 espaces memoire pour chacun des pointeurs & on protege dans le meme temps
	if(!(ptr = (char **)malloc(sizeof(char*) * (word_count(s, c) + 1))))
		return NULL;

	// On va devoir parcourir toute la chaine en partant de s[0]
	i = 0;
	h = 0;
	while (s[i])
	{
		// On va a la premiere lettre du mot
		while (s[i] == c && s[i])
		{
			i++;
		printf("i vaut %i\n", i);
		}
		// On trouve la taille du mot en question
		j = 0;
		//printf("TEST1\n");
		while (s[i + j] != c && s[i + j])
		{
			j++;
			//printf("j vaut %i\n", j);
		}
		// Notre mot fait j lettre
		// Il faut donc allouer j + 1 char de memoire pour reecrire le mot dans ptr[]
		ptr[h] = (char *)malloc(sizeof(char) * (j + 1));
		// On revient en arriere et on ecrit dans ptr de h les char de s[]
		k = 0;
		printf("TEST1\n");
		while (i < j)
		{
			ptr[h][k] = s[i];
			i++;
			k++;
		}
		// On termine ptr[h]
		ptr[h][k] = '\0';
		//printf("Le mot numero %i vaut : %s\n", h, ptr[h]);
		h++;

	}
	ptr[h] = NULL;
	return (ptr);
}














/*
   char **ft_strsplit(char const *s, char c)
   {
   char **ptr;
   int i;
   int j;
   int h;
   int k;
   int count;

   if (s == NULL)
   return NULL;

   ptr = (char **)malloc(sizeof(**ptr) * (word_count(s, c) + 1));
   if (ptr == NULL)
   return (NULL);
   i = 0;
   h = 0;
   while (s[i])
   {
   while (s[i] == c && s[i])
   i++;
   j = i;
   if (i == (int)ft_strlen(s))
   {
   ptr[h] = NULL;
   return (ptr);
   }
   count = 0;
   k = 0;
   while (s[j] != c && s[j])
   {
   count++;
   j++;
   }
   if(!(ptr[h] = (char *)malloc(sizeof(*ptr) * (count + 1))))
   return NULL;
   k = 0;
   while (i < j && s[i] && h < word_count(s, c))
   {
   ptr[h][k] = s[i];
   i++;
   k++;
   }
   ptr[h][k] = '\0';
//	printf("Le mot n %i vaut %s|\n", h, ptr[h]);
h++;
}
//  ptr[h] = NULL;
//printf("Le mot numero %i vaut : %s\n", h, ptr[h]);
//printf("%i\n", h );
return (ptr);
}
 */
