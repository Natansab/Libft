#ifndef LIBFT_H
#define  LIBFT_H

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

// Color in terminal
#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_RESET   "\x1b[0m"

char  *ft_strdup(const char *s1);
char  *ft_strndup(const char *s1, size_t n);
int   ft_strlen(const char *str);
char *ft_strcpy(char *dst, const char *src);
char  *ft_strncpy(char *dst, const char *src, size_t len);
char *ft_strcat(char *restrict s1, const char *restrict s2);
#endif
