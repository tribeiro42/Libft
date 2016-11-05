/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tribeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 04:05:46 by tribeiro          #+#    #+#             */
/*   Updated: 2016/11/04 19:16:21 by tribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

#include <string.h>

void	*ft_memset(void *ptr, int value, size_t num);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*memccpy(void *dst, const void *src, int c, size_t n);

void	ft_putchar(char c);
void	ft_putstr(char const *s);
void	ft_putendl(char const *s);
void	ft_putnbr(int n);

void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char const *s, int fd);
void	ft_putendl_fd(char const *s, int fd);
void	ft_putnbr_fd(int n, int fd);

size_t	ft_strlen(char const *str);

int	ft_isprint(int c);
int	ft_isascii(int c);
int	ft_isalnum(int c);
int	ft_isdigit(int c);
int	ft_isalpha(int c);
int	ft_toupper(int c);
int	ft_tolower(int c);

int	ft_atoi(char *str);
char	*ft_strstr(const char  *s, const char *to_find);
#endif
