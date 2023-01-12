/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-dhah <bu_snaad93@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 17:32:15 by ral-dhah          #+#    #+#             */
/*   Updated: 2022/06/12 17:14:23 by ral-dhah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// s = "aaaaaaaa"
// start = 400
// len = 1000

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_str;
	size_t	i;
	size_t	j;

	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (ft_strlen(&s[start]) < len)
		len = ft_strlen(&s[start]);
	new_str = (char *)malloc(len + 1);
	if (new_str == NULL || s == NULL)
		return (NULL);
	i = start;
	j = 0;
	while (i < ft_strlen(s) && j < len)
		new_str[j++] = s[i++];
	new_str[j] = '\0';
	return (new_str);
}

// int main(void)
// {
// 	char *str = "coders at 42";
// 	printf("%s\n", str);
// 	printf("%s\n", ft_substr(str, 7, 6));
// }