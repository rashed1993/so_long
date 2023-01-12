/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-dhah <bu_snaad93@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 18:20:49 by ral-dhah          #+#    #+#             */
/*   Updated: 2022/06/14 18:07:30 by ral-dhah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, s + i);
		i++;
	}
}

// void	func(unsigned int i, char *c)
// {
// 	printf("%d %c\n", i, *c);
// }

// int main(void)
// {
// 		// ft_putendl("--- striter ? --- ");
// 	char	str2[] = "abcde";
// 	ft_striteri(str2, func);
// }