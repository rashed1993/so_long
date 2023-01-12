/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-dhah <bu_snaad93@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 16:24:27 by ral-dhah          #+#    #+#             */
/*   Updated: 2022/06/14 18:08:32 by ral-dhah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	front;
	size_t	rear;
	char	*str;

	str = 0;
	if (s1 != 0 && set != 0)
	{
		front = 0;
		rear = ft_strlen(s1) - 1;
		while (s1[front] && ft_strchr(set, s1[front]))
			front++;
		while (s1[rear] && ft_strchr(set, s1[rear]) && rear > front)
			rear--;
		str = (char *)malloc(sizeof(char) * (rear - front + 2));
		if (str != NULL)
			ft_strlcpy(str, &s1[front], rear - front + 2);
	}
	return (str);
}

// int main(void)
// {
// 	printf("%s\n", ft_strtrim(" HeHHlloHHHHH ", " H"));
// 	return 0;
// }