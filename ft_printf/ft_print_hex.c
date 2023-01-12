/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-dhah < ral-dhah@student.42abudhabi.ae> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 17:37:47 by ral-dhah          #+#    #+#             */
/*   Updated: 2022/07/07 18:45:33 by ral-dhah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(unsigned int num, const char format, int *counter)
{
	if (num >= 16)
	{
		ft_puthex(num / 16, format, counter);
		ft_puthex(num % 16, format, counter);
	}
	else
	{
		if (num <= 9)
			*counter += ft_putchar(num + '0');
		else
		{
			if (format == 'x')
				*counter += ft_putchar(num - 10 + 'a');
			if (format == 'X')
				*counter += ft_putchar(num - 10 + 'A');
		}
	}
}

int	ft_hex(unsigned int num, const char format)
{
	int	counter;

	counter = 0;
	if (num == 0)
		return (write(1, "0", 1));
	else
		ft_puthex(num, format, &counter);
	return (counter);
}
