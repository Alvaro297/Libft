/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvamart <alvamart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:00:35 by alvamart          #+#    #+#             */
/*   Updated: 2024/09/24 12:57:18 by alvamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	*str_src;

	i = 0;
	str = (unsigned char *) dest;
	str_src = (unsigned char *) str;
	while (i < n)
	{
		str[i] = str_src[i];
		i++;
	}
	return (dest);
}
