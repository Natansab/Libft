#ifndef LIBFT_H
#define  LIBFT_H

#include <string.h>
#include <stdlib.h>

char  *ft_strdup(const char *s1);
char  *ft_strndup(const char *s1, size_t n);
size_t   ft_strlen(const char *str);
char *ft_strcpy(char *dst, const char *src);
char  *ft_strncpy(char *dst, const char *src, size_t len);
char *ft_strcat(char *restrict s1, const char *restrict s2);
char *ft_strncat(char *restrict s1, const char *restrict s2, size_t n);
size_t ft_strlcat(char * restrict dst, const char * restrict src, size_t size);
void *ft_memset(void *b, int c, size_t len);
void ft_bzero(void *s, size_t n);
#endif
