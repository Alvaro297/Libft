CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_isalnum.c ft_isapha.c ft_isacii.c ft_isdigit.c ft_tolower.c ft_toupper.c ft_bzrp.c ft_calloc.c ft_memchr.c\
	ft_memcp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strdup.c
OBJ = $(SRC:.c=.o)
RM = rm -f