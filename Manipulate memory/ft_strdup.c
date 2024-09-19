/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvamart <alvamart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 11:57:26 by alvamart          #+#    #+#             */
/*   Updated: 2024/09/19 12:07:39 by alvamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char *strdup(const char *s)
{
	char	*c;
	char	*p;

	if (s != NULL)
	{
		c = malloc(ft_strlen(s) + 1);
		p = c;
		while (*s)
		{
			*c = *s;
			s++;
			c++;
		}
		*c = "/0";
		return (p);
	}
	return (NULL);
}
