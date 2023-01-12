/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-dhah < ral-dhah@student.42abudhabi.ae> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 16:17:11 by ral-dhah          #+#    #+#             */
/*   Updated: 2022/07/14 17:36:20 by ral-dhah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_parse(va_list ptr, char c)
{
	if (c == 'c')
		return (ft_putchar (va_arg (ptr, int)));
	if (c == 's')
		return (ft_putstr (va_arg (ptr, char *)));
	if (c == 'd' || c == 'i')
		return (ft_print_number (va_arg (ptr, int)));
	if (c == 'x' || c == 'X')
		return (ft_hex (va_arg (ptr, unsigned int), c));
	if (c == 'u')
		return (ft_print_unumber(va_arg (ptr, unsigned int)));
	if (c == 'p')
		return (ft_ptr(va_arg (ptr, unsigned long long)));
	if (c == '%')
		return (ft_putchar ('%'));
	else
		return (ft_putchar (c));
	return (0);
}

int	ft_printf(const char *str, ...)
{
	int			i;
	int			counter;
	va_list		ptr;

	i = 0;
	counter = 0;
	va_start (ptr, str);
	while (str[i] != '\0')
	{
		if (str[i] != '%')
		{
			ft_putchar (str[i]);
			counter++;
		}
		else
		{
			counter += ft_parse (ptr, str[i + 1]);
			i += 1;
		}
		i++;
	}
	va_end (ptr);
	return (counter);
}

// #include <stdio.h>

// int main ()
// {
// 	int i = 2344381;
// 	ft_printf ("%d\n", i);
// 	printf ("%d\n", i);
// }
