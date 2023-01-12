/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-dhah < ral-dhah@student.42abudhabi.ae> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 17:39:32 by ral-dhah          #+#    #+#             */
/*   Updated: 2022/07/07 18:49:43 by ral-dhah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putptr(unsigned long long num, int *counter)
{
	if (num >= 16)
	{
		ft_putptr(num / 16, counter);
		ft_putptr(num % 16, counter);
	}
	else
	{
		if (num < 10)
		{
			ft_putchar(num + '0');
			(*counter)++;
		}
		else
		{
			ft_putchar(num - 10 + 'a');
			(*counter)++;
		}
	}
}

int	ft_ptr(unsigned long long ptr)
{
	int	print_ptr;

	print_ptr = 0;
	print_ptr += write(1, "0x", 2);
	if (ptr == 0)
		print_ptr += write(1, "0", 1);
	else
		ft_putptr(ptr, &print_ptr);
	return (print_ptr);
}
