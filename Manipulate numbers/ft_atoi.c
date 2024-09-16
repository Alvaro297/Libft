/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvamart <alvamart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 18:21:47 by alvamart          #+#    #+#             */
/*   Updated: 2024/09/16 18:21:47 by alvamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <unistd.h>

void	ft_putchar(char str)
{
	write(1, &str, 1);
}

int	ft_atoi(char *num)
{
	int	i;
	int	contminus;
	int	nbr;

	i = 0;
	nbr = 0;
	contminus = 0;
	while ((num[i] >= 9 && num[i] <= 13) || num[i] == 32)
		i++;
	while (num[i] == '-' || num[i] == '+')
	{
		if (num[i] == '-')
			contminus += 1;
		i++;
	}
	while (num[i] >= '0' && num[i] <= '9')
	{
		nbr = (nbr * 10) + (num[i] - '0');
		i++;
	}
	if (!contminus % 2 == 0)
		nbr *= -1;
	return (nbr);
}