/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strlowcase.c                                     :+:    :+:           */
/*                                                      +:+                   */
/*   By: tcarrero <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/27 17:33:14 by tcarrero       #+#    #+#                */
/*   Updated: 2026/06/28 15:07:09 by tcarrero       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int		i;
	char	*str_low;

	i = 0;
	str_low = str;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str_low[i] = str[i] + 32;
		}
		else
		{
			str_low[i] = str[i];
		}
		i++;
	}
	return (str_low);
}
