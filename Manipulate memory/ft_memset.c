/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvamart <alvamart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 13:37:58 by alvamart          #+#    #+#             */
/*   Updated: 2024/09/17 14:01:45 by alvamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memset(void *ptr, int value, size_t num)
{
	int				i;
	unsigned char	*p;

	i = 0;
	p = (unsigned char *) ptr;
	while (i < (int) num)
	{
		p[i] = value;
		i++;
	}
	return (ptr);
}