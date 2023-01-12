/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-dhah <bu_snaad93@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 15:24:06 by ral-dhah          #+#    #+#             */
/*   Updated: 2022/06/07 16:06:04 by ral-dhah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <fcntl.h>

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	if (!s)
		return ;
	if (fd < 1)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
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