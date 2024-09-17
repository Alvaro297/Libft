/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvamart <alvamart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 10:50:49 by alvamart          #+#    #+#             */
/*   Updated: 2024/09/17 10:50:49 by alvamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

//LIBS//
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

//FUNCTIONS//
char	*ft_substr(const char *s, unsigned int start, size_t len);
char	*ft_strrchr(const char *s, int c);
char	*strnstr(const char *s1, const char *s2, size_t n);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
size_t	ft_strlen(const char *str);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
char	*ft_strchr(const char *s, int c);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_isdigit(int c);
int		ft_isascii(int c);
int		ft_isalpha(int c);
int		ft_isalnum(int c);
void    *ft_memset(void* ptr, int value, size_t num);
void bzero(void *s, size_t n);
//*****//
#endif