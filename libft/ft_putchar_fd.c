/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-dhah <bu_snaad93@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 14:48:56 by ral-dhah          #+#    #+#             */
/*   Updated: 2022/06/06 21:35:28 by ral-dhah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <fcntl.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// int	main(void)
// {
// 	char	temp[]= "random.txt";
// 	int	fd = open(temp, O_WRONLY);
// 	char c = 'G';
// 	int i = 10;
// 	int j = 0;
// 	while (j < i)
// 	{
// 		ft_putchar_fd(c, fd);
// 		j++;
// 	}
// 	//write (1, "M", 1);
// 	close (fd);
// }