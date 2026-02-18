/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzahirjo <mzahirjo@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 17:20:00 by mzahirjo          #+#    #+#             */
/*   Updated: 2026/02/04 16:45:39 by mzahirjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	unsigned int	i;
	char			*hex;
	unsigned char	c;

	hex = "0123456789abcdef";
	i = 0;
	while (str[i] != '\0')
	{
		c = (unsigned char)str[i];
		if (c < 32 || c == 127)
		{
			write(1, "\\", 1);
			write(1, &hex[(c / 16)], 1);
			write(1, &hex[(c % 16)], 1);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
