#include "../libft.h"

void ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(1, s, ft_strlen(s));
}