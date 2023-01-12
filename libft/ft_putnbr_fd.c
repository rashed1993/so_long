/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-dhah <bu_snaad93@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 14:39:56 by ral-dhah          #+#    #+#             */
/*   Updated: 2022/06/07 15:49:44 by ral-dhah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <fcntl.h>

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(-n, fd);
	}
	else if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd(n % 10 + '0', fd);
	}
	else
		ft_putchar_fd(n + '0', fd);
}

// int	main(void)
// {
// 	char	temp[]= "random.txt";
// 	int	fd = open(temp, O_WRONLY);
// 	int n = 1993;
// 	int i = 1;
// 	int j = 0;
// 	while (j < i)
// 	{
// 		ft_putnbr_fd(n, fd);
// 		j++;
// 	}
// 	//write (1, "M", 1);
// 	close (fd);
// }