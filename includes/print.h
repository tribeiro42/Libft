/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tribeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/14 21:02:37 by tribeiro          #+#    #+#             */
/*   Updated: 2017/09/19 19:18:06 by tribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINT_H
# define PRINT_H
# define HEX "0123456789abcdef"
# define COLOR_RED     "\x1b[31m"
# define COLOR_GREEN   "\x1b[32m"
# define COLOR_YELLOW  "\x1b[33m"
# define COLOR_BLUE    "\x1b[34m"
# define COLOR_MAGENTA "\x1b[35m"
# define COLOR_CYAN    "\x1b[36m"
# define COLOR_RESET   "\x1b[0m"

void				ft_putchar(char c);
void				ft_putnchar(char c, int n);
void				ft_putchar_fd(char c, int fd);

void				ft_putstr(char const *s);
void				ft_putendl(char const *s);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putnbr_fd(int n, int fd);
void				ft_putstr_color(char *s, char *c);
void				ft_putstr_color_fd(int fd, char *s, char *c);
void				ft_putendl_list(t_list **list);
void				ft_putendl_array2d(char ***array);
void				ft_putnbr(int n);

void				ft_putaddr(void *ptr);
void				ft_putbase(int n, int b);
void				ft_puthex(unsigned long l);
void				ft_print_binary(void *data, size_t size);

#endif
