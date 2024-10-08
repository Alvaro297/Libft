/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvamart <alvamart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 11:00:48 by alvamart          #+#    #+#             */
/*   Updated: 2024/09/24 11:00:55 by alvamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(1, s, ft_strlen(s));
}
