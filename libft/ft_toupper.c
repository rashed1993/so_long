/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-dhah <bu_snaad93@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 15:01:36 by ral-dhah          #+#    #+#             */
/*   Updated: 2022/06/06 17:23:01 by ral-dhah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
/*
int	main(void)
{
	int	i = 0;
	char word[] = "just make it happen\n";
	char chr;

	while (word[i])
	{
		chr = word[i];
		printf("%c", ft_toupper(chr));
		i++;
	}
}
*/
