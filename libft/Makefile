NAME = libft.a
PATH_SRC = ./srcs/
HEADER = ./includes/
FLAG = -Wall -Wextra -Werror
OPTION = -c -I $(HEADER)
SRC = $(PATH_SRC)ft_strcat.c $(PATH_SRC)ft_strncat.c  \
	$(PATH_SRC)ft_strncpy.c $(PATH_SRC)ft_strcpy.c $(PATH_SRC)ft_strdup.c \
	$(PATH_SRC)ft_strndup.c $(PATH_SRC)ft_strlen.c $(PATH_SRC)ft_strlcat.c \
	$(PATH_SRC)ft_memset.c $(PATH_SRC)ft_bzero.c $(PATH_SRC)ft_memcpy.c \
	$(PATH_SRC)ft_memccpy.c
OBJ = ft_strcat.o  ft_strcpy.o  ft_strdup.o ft_strndup.o ft_strlen.o \
	ft_strncpy.o ft_strncat.o ft_strlcat.o ft_memset.o ft_bzero.o ft_memcpy.o \
	ft_memccpy.o


all: $(NAME)

$(NAME):
	gcc $(FLAG) $(OPTION) $(SRC)
	ar rc $(NAME) $(OBJ)

clean:
	/bin/rm -f $(OBJ)
fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
