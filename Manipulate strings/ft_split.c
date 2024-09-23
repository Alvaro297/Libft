/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvamart <alvamart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 12:37:28 by alvamart          #+#    #+#             */
/*   Updated: 2024/09/23 14:10:00 by alvamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static int	ft_count_words(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] != '\0' && s[i] != c)
		{
			i++;
		}
	}
	return (count++);
}

static char	**ft_split2(char **dest,char const *s, char c)
{
	int		lenght;
	int		i;
	char	*start;

	i = 0;
	while (*s)
	{
		lenght = 0;
		start = s;
		while (*s && *s != c)
		{
			s++;
			lenght++;
		}
		dest[i] = ft_substr(start, 0, lenght);
		if (!dest[i])
		{
			ft_free_memory(dest, i);
		}
		i++;
	}
	dest[i] = NULL;
	return (dest);
}

static void	ft_free_memory(char **dest, int i)
{
	while (i >= 0)
	{
		free(*dest[i]);
		i--;
	}
	free(dest);
}

char	**ft_split(char const *s, char c)
{
	char	**dest;

	if (!s)
		return (NULL);
	dest = (char **)malloc((ft_count_words(s, c) + 1) * sizeof(char *));
	return (ft_split2(dest, s, c));
}