/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-dhah < ral-dhah@student.42abudhabi.ae> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 16:21:48 by ral-dhah          #+#    #+#             */
/*   Updated: 2022/07/07 18:59:19 by ral-dhah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int num, int *counter)
{
	if (num == -2147483648)
	{
		ft_putnbr(num / 10, counter);
		ft_putchar('8');
		(*counter)++;
	}
	else if (num < 0)
	{
		ft_putchar('-');
		(*counter)++;
		ft_putnbr(-num, counter);
	}
	else
	{
		if (num > 9)
		{
			ft_putnbr(num / 10, counter);
		}
		ft_putchar((num % 10) + 48);
		(*counter)++;
	}
}

int	ft_print_number(int num)
{
	int	counter;

	counter = 0;
	ft_putnbr(num, &counter);
	return (counter);
}
