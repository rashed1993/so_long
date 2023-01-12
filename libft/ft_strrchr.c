/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-dhah <bu_snaad93@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 17:05:36 by ral-dhah          #+#    #+#             */
/*   Updated: 2022/06/12 17:04:30 by ral-dhah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*lastp;

	if (s == 0 && (char)c != '\0')
		return (NULL);
	lastp = (0);
	while (*s)
	{
		if (*s == (char)c)
		lastp = (char *)s;
		s++;
	}
	if (lastp)
		return (lastp);
	if ((char)c == '\0')
		return ((char *)s);
	return (0);
}
/*
int main(void)
{
	char s[] = "some,date,in,commas";
	
	char *comma = ft_strrchr(s, ','); //prints out last comma
	
	printf("%s\n", comma);
	
	return 0;
}
*/