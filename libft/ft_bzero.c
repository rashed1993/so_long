/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-dhah <bu_snaad93@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 14:43:39 by ral-dhah          #+#    #+#             */
/*   Updated: 2022/06/06 18:34:53 by ral-dhah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *s, size_t n)
{
	size_t	i;

		i = 0;
	while (i < n)
	{
		((char *)s)[i] = 0;
		i++;
	}
	return (0);
}
/*int main(void)
{
    char str[10]= "abcd";
    //ft_bzero(str, 3); //<<uncomment ft line to check if want your code to work!
    printf("%s", str);
}
*/