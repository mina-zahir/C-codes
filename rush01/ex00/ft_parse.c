/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzahirjo <mzahirjo@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 17:19:21 by mzahirjo          #+#    #+#             */
/*   Updated: 2026/02/08 15:24:07 by mzahirjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_parse(char *str, int *clues)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			if (str[i] >= '1' && str[i] <= '4')
			{
				clues[count] = str[i] - '0';
				count++;
			}
			else
				return (0);
		}
		else if (str[i] != ' ')
			return (0);
		i++;
	}
	if (count == 16 && i == 31)
		return (1);
	return (0);
}
