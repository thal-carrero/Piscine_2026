/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_sort_int_tab.c                                   :+:    :+:           */
/*                                                      +:+                   */
/*   By: tcarrero <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/26 13:16:02 by tcarrero       #+#    #+#                */
/*   Updated: 2026/06/27 15:32:36 by tcarrero       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	buff;
	int	i;

	i = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			buff = tab[i + 1];
			tab[i + 1] = tab[i];
			tab[i] = buff;
			i = 0;
		}
		else
		{
			i++;
		}
	}
}
/*
#include <stdio.h>

int	main(void)
{
	int	arr[] = {8, 2, 3, 1, 4};
	int	i = 0; 
	int	size = 5;

	while (i < size) 
	{
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");
	i = 0;
	ft_sort_int_tab(arr, size);
	 while (i < size)
        {
                printf("%d ", arr[i]);
		i++;
        }
}
	*/
