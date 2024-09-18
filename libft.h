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

//ESTRUCTURA//
typedef struct	s_list
{
	void 			*content;
	struct s_list	*next;
}					t_list;

//LIBS//
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

//FUNCTIONS//
//Manipulate strings//
char	*ft_strchr(const char *s, int c);
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
size_t	ft_strlen(const char *str);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*strnstr(const char *s1, const char *s2, size_t n);
char	*ft_strrchr(const char *s, int c);
char	*ft_substr(const char *s, unsigned int start, size_t len);
//*****//
//Manipulate characters//
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_isdigit(int c);
int		ft_isascii(int c);
int		ft_isalpha(int c);
int		ft_isalnum(int c);
//*****//
//Manipulate memory//
void	ft_bzero(void *s, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void* ptr, int value, size_t num);
//******//

//*****//

//BONUS//
t_list *ft_lstnew(void *content);
//*****//
#endif