#Variables
CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
SRCS = ft_isalnum.c ft_isapha.c ft_isacii.c ft_isdigit.c ft_tolower.c ft_toupper.c ft_bzrp.c ft_calloc.c ft_memchr.c\
	ft_memcp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strdup.c ft_atoi.c ft_itoa.c ft_split.c ft_strchr.c ft_striteri.c\
	ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c\
	ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c
SRCB = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c\
	ft_lstmap.c
OBJ = $(SRCS:.c=.o)
BONUSOBJ = $(SRCB:.c=.o)
RM = rm -f

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)


#La linea %.o: %.c significa que para cada archivo .o necesita un archivo .c
#El $< representa el archivo fuente y el $@ representa el archivo objetivo y el -c indica a gcc que solo compile y no enlaze los .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
#Eliminamos los archivos .o generados
clean:
	$(RM) $(OBJ)
#Llama a clean y tambien eliminamos la libreria libft.a
fclean: clean
	$(RM) $(NAME)
#Para tambien compilar los archivos bonus
bonus: $(OBJ) $(BONUSOBJ)
	ar rcs $(NAME) $(OBJ) $(BONUSOBJ)
#Elimina todo y luego lo recompila todo de nuevo
re: fclean all