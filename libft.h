/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkihn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 14:13:19 by kkihn             #+#    #+#             */
/*   Updated: 2018/11/20 20:13:47 by kkihn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <unistd.h>
# include <stdlib.h>

void	*ft_memset(void *destination, int c, size_t n); //?
void    ft_bzero(void *dest, size_t n); //?
void    *ft_memcpy(void *dest, const void *src, size_t n); //?
void	*ft_memccpy(void *dest, const void *src, int c, size_t n); //?
//memmove
//memchr
//memcmp
int		ft_strlen(char *str);
char	*ft_strdup(char *src);
char	*ft_strcpy(char *dest, char *src);
char    *ft_strncpy(char *dest, char *src, unsigned int n);
char	*ft_strcat(char *dest, char *src);
char	*ft_strncat(char *dest, char *src, int nb);
//strlcat
//strchr
//strrchr
char    *ft_strstr(char *str, char *to_find); //?
//strnstr
//strcmp
//strncmp
int		ft_atoi(char *str);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
//isascii
//isprint
//toupper
//tolower
#endif
