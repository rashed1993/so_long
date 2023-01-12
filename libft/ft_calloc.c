/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-dhah <bu_snaad93@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 14:13:55 by ral-dhah          #+#    #+#             */
/*   Updated: 2022/06/14 18:04:20 by ral-dhah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t	size)
{
	char	*rashod;

	if ((size != 0 && count > SIZE_MAX / size))
		return (NULL);
	rashod = malloc((count * size));
	if (!rashod)
		return (NULL);
	ft_bzero (rashod, (count * size));
	return (rashod);
}

// int	main(void)
// {
// 	int n;
// 	printf("Enter size of array\n");
// 	scanf("%d", &n);
// 	int *A = (int*)ft_calloc(n, sizeof(int));
// 	for(int i = 0;i<n;i++)
// 	{
// 		A[i] = i+1;
// 	}
// 	for(int i =0;i<n;i++)
// 	{
// 		printf("%d ",A[i]);
// 	}
// }