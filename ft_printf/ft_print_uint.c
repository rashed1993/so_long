/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_uint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-dhah < ral-dhah@student.42abudhabi.ae> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 19:01:11 by ral-dhah          #+#    #+#             */
/*   Updated: 2022/07/14 17:31:21 by ral-dhah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putuint(unsigned int num, int *counter)
{
	if (num > 9)
	{
		ft_putuint(num / 10, counter);
	}
	*counter += ft_putchar((num % 10) + 48);
}

int	ft_print_unumber(unsigned int num)
{
	int	counter;

	counter = 0;
	ft_putuint(num, &counter);
	return (counter);
}
