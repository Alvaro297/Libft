#include "../libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	unsigned char	*str;
	const unsigned char	*str_src;

	i = 0;
	str = (unsigned char *) dest;
	str_src = (const unsigned char *) str;
	while (i < n )
	{
		str[i] = str_src[i];
		i++;
	}
	return (dest);
}