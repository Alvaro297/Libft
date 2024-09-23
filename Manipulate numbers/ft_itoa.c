/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvamart <alvamart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 11:44:06 by alvamart          #+#    #+#             */
/*   Updated: 2024/09/23 12:24:18 by alvamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static int	digit_count(int n)
{
	int	digit;

	digit = 0;
	while (n)
	{
		n /= 10;
		digit++;
	}
	return (digit);
}

char	*ft_itoa(int n)
{
	int		sign;
	int		d_count;
	char	*result;
	int		i;

	sign = 0;
	if (n < 0)
		sign = 1;
	d_count = digit_count(n) + sign;
	i = d_count - 1;
	result = malloc(d_count + 1);
	while (n)
	{
		result[i--] = n % 10 + '0';
		n /= 10;
	}
	if (sign)
		result[0] = '-';
	result[d_count] = '\0';
	return (result);
}