/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzahirjo <mzahirjo@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 19:47:57 by mzahirjo          #+#    #+#             */
/*   Updated: 2026/02/03 14:39:23 by mzahirjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	is_first_letter;

	i = -1;
	is_first_letter = 1;
	while (str[++i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= '0' && str[i] <= '9'))
		{
			if (is_first_letter == 1 && (str[i] >= 'a' && str[i] <= 'z'))
			{
				str[i] -= 32;
			}
			else if (is_first_letter == 0 && (str[i] >= 'A' && str[i] <= 'Z'))
			{
				str[i] += 32;
			}
			is_first_letter = 0;
		}
		else
			is_first_letter = 1;
	}
	return (str);
}
