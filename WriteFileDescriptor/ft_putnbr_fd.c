#include "../libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	i;
	if (n < 0)
	{
		if (n == -2147483648)
		{
			ft_putstr_fd("-2147483648", fd);
			return ;
		}
		ft_putchar_fd('-', fd);
		n = -n;
	}

	if (n / 10)
		ft_putnbr_fd(n / 10, fd);
	
	i = (n % 10) + '0';
	write(fd, &i, 1);
}

int main() {
    ft_putnbr_fd(4352, 1);
    return 0;
}