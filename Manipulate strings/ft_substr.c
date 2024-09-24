/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvamart <alvamart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 18:36:21 by alvamart          #+#    #+#             */
/*   Updated: 2024/09/16 18:36:21 by alvamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	unsigned int	lenft;
	unsigned int	i;
	char			*dest;

	i = start;
	if (len <= start)
		return (NULL);
	lenft = (unsigned int)len - start;
	dest = (char *) malloc(sizeof(char) * (len + 1));
	while (i < lenft && (*(s + i) != '\0'))
	{
		*dest = *(s + i);
		dest++;
		i++;
	}
	*dest = '\0';
	return (dest - len);
}
