/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-dhah <bu_snaad93@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 14:08:01 by ral-dhah          #+#    #+#             */
/*   Updated: 2022/06/07 19:08:11 by ral-dhah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (*s2 == '\0')
	{
		return ((char *)s1);
	}
	i = ft_strlen((char *)s2);
	while (*s1 != '\0' && n-- >= i)
	{
		if (*s1 == *s2 && ft_memcmp(s1, s2, i) == 0)
			return ((char *)s1);
		s1++;
	}
	return (NULL);
}

// int main(void)
// {
// 	char larg[] = "Rashed is done well, hello";
// 	char smal[] = "done";
// 	printf("%s",ft_strnstr(larg, smal, 20));
// }