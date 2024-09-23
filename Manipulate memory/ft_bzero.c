/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvamart <alvamart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 13:57:14 by alvamart          #+#    #+#             */
/*   Updated: 2024/09/23 13:32:02 by alvamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	bzero(void *s, size_t len)
{
	unsigned char	*str;
	size_t			i;


	i = 0;
	str = (unsigned char *) s;
	while (i < len)
	{
		str[i] = 0;
		i++;
	}
	return (NULL);
}
