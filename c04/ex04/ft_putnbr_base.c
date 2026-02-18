/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzahirjo <mzahirjo@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 20:13:38 by mzahirjo          #+#    #+#             */
/*   Updated: 2026/02/06 23:06:18 by mzahirjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_base_valid(char *base)
{
	int	i;
	int	j;

	if (*base == '\0')
		return (0);
	i = 0;
	while (base [i] != '\0')
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i > 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		base_len;
	long	n;

	if (!is_base_valid(base))
		return ;
	base_len = 0;
	while (base[base_len])
		base_len ++;
	n = nbr;
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n >= base_len)
		ft_putnbr_base(n / base_len, base);
	write(1, &base[n % base_len], 1);
}
