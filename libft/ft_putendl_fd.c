/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-dhah <bu_snaad93@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 17:17:37 by ral-dhah          #+#    #+#             */
/*   Updated: 2022/06/06 21:18:57 by ral-dhah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <fcntl.h>

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

// int	main(void)
// {
// 	char	temp[]= "random.txt";
// 	int	fd = open(temp, O_WRONLY);
// 	//fd = open(filename, O_RDONLY);
// 	char *s = "yes";
// 	int i = 10;
// 	int j = 0;
// 	while (j < i)
// 	{
// 		ft_putendl_fd(s, fd);
// 		j++;
// 	}
// 	//write (1, "M", 1);
// 	close (fd);
// }