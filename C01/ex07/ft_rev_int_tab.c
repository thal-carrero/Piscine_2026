/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_rev_int_tab.c                                    :+:    :+:           */
/*                                                      +:+                   */
/*   By: tcarrero <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/26 12:19:41 by tcarrero       #+#    #+#                */
/*   Updated: 2026/06/27 15:39:40 by tcarrero       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	buff;
	int	i;

	buff = 0;
	i = 0;
	while (i < size - 1)
	{
		buff = tab[i];
		tab[i] = tab[size - 1];
		tab[size - 1] = buff;
		i++;
		size--;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	int arr[] = {1, 2, 3 , 4, 5};
	int	i = 0;
	int	size = 5;

	while (i < size)
	{
		printf("%d", arr[i]);
		i++;
	}	
	printf("\n");

	i = 0;
	ft_rev_int_tab(arr, 5);
	  while (i < size)
        {
                printf("%d", arr[i]);
                i++;
        }
}
*/
