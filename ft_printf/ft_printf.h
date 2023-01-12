/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-dhah < ral-dhah@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 16:17:23 by ral-dhah          #+#    #+#             */
/*   Updated: 2022/12/14 16:17:01 by ral-dhah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>

int		ft_putchar(char c);
int		ft_putstr(char *str);
void	ft_putnbr(int num, int *counter);
void	ft_puthex(unsigned int num, const char format, int *counter);
int		ft_hex(unsigned int num, const char format);
int		ft_len(unsigned int num);
void	ft_putuint(unsigned int num, int *counter);
void	ft_putptr(unsigned long long num, int *counter);
int		ft_ptr(unsigned long long int ptr);
int		ft_parse(va_list ptr, char c);
int		ft_printf(const char *str, ...);
int		ft_print_number(int num);
int		ft_print_unumber(unsigned int num);

#endif
