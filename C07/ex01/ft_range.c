/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarrero <tcarrero@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/08 10:35:11 by tcarrero          #+#    #+#             */
/*   Updated: 2026/07/09 16:08:42 by tcarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*arr;
	int	i;

	if (min >= max)
		return (NULL);
	else
	{
		i = 0;
		size = max - min;
		arr = (int *) malloc (sizeof (int) * size);
		if (!arr)
			return (NULL);
		while (i < size)
		{
			arr[i] = min;
			i++;
			min++;
		}
		return (arr);
	}
}
//#include <stdio.h>

//int	main(void)
//{
//	int	min = 1;
//	int max = 6;
//	int size = max - min;
//	int	i = 0;

//	printf("min = %d max = %d\n", min, max);
//	if (ft_range(min, max) == NULL)
//		printf("(null)\n");
//	while (i < size)
//	{
//		printf("%d, ", ft_range(min, max)[i]);
//		i++;
//	}
//	return 0;
//}