/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-dhah <bu_snaad93@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 18:14:10 by ral-dhah          #+#    #+#             */
/*   Updated: 2022/06/06 17:22:55 by ral-dhah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}
/*
int	main(void)
{
	int		i = 0;
	char	word[] = "JUST MAKE IT HAPPEN\n";
	char	chr;

	while (word[i])
	{
		chr = word[i];
		printf("%c", ft_tolower(chr));
		i++;
	}
}
*/