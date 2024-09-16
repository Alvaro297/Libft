/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvamart <alvamart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 17:50:48 by alvamart          #+#    #+#             */
/*   Updated: 2024/09/16 17:50:48 by alvamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char	*str)
{
	int		i;
	i = 0;
	while (str[i])
		i++;
    return (i);
}

char    *ft_strrev(char *str)
{
	int	length;
	int		i;
	char	temp;
    
	i = 0;
    length = ft_strlen(str);
    while (str[i])
    {
		temp = str[i];
		str[i] = str[length];
		str[length] = temp;
		i++;
		length--;
	}
	return (str);
}