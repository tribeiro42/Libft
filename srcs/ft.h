/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tribeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 04:05:46 by tribeiro          #+#    #+#             */
/*   Updated: 2016/11/06 21:23:27 by tribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

#include <string.h>
#include <stdlib.h>

/*         WARNNING BALETRINGUE TU PUSH SA SUCIDE TOI */
#include <stdio.h>

void	*ft_memset(void *ptr, int value, size_t num);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);

void	*ft_memchr(const void *s, int c, size_t n);

void	ft_putchar(char c);
void	ft_putstr(char const *s);
void	ft_putendl(char const *s);
void	ft_putnbr(int n);

void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char const *s, int fd);
void	ft_putendl_fd(char const *s, int fd);
void	ft_putnbr_fd(int n, int fd);

size_t	ft_strlen(char const *str);
char	*ft_strdup(const char *s1);
char	*ft_strstr(const char  *s, const char *to_find);
char	*ft_strnstr(const char  *s, const char *to_find, size_t n);
char	*ft_strcpy(char *dst, const char *src);
char	*ft_strncpy(char * dst, const char * src, size_t len);
char	*ft_strcat(char *s1, const char *s2);
char	*ft_strncat(char *s1, const char *s2, size_t n);
size_t	ft_strlcat(char * restrict dst, const char * restrict src, size_t size);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);

int	ft_isprint(int c);
int	ft_isascii(int c);
int	ft_isalnum(int c);
int	ft_isdigit(int c);
int	ft_isalpha(int c);
int	ft_toupper(int c);
int	ft_tolower(int c);

int	ft_atoi(char *str);

#endif
