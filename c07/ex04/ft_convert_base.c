/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzahirjo <mzahirjo@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 21:58:28 by mzahirjo          #+#    #+#             */
/*   Updated: 2026/02/12 14:45:07 by mzahirjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str);
int	is_base_valid(char *base);
int	ft_atoi_base(char *str, char *base);

int	get_nbr_len(int nbr, int base_len)
{
	unsigned int	n;
	int				len;

	len = 0;
	if (nbr < 0)
	{
		n = -nbr;
		len++;
	}
	else
		n = nbr;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n = n / base_len;
		len++;
	}
	return (len);
}

char	*ft_itoa_base(int nbr, char *base_to)
{
	int				base_len;
	int				nbr_len;
	char			*result;
	unsigned int	n;

	base_len = ft_strlen(base_to);
	nbr_len = get_nbr_len(nbr, base_len);
	result = (char *)malloc(sizeof(char) * (nbr_len +1));
	n = nbr;
	if (!result)
		return (NULL);
	result[nbr_len] = '\0';
	if (nbr < 0)
	{
		result[0] = '-';
		n = -nbr;
	}
	if (n == 0)
		result[0] = base_to[0];
	while (n > 0)
	{
		result[--nbr_len] = base_to[n % base_len];
		n = n / base_len;
	}
	return (result);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	decimal_val;

	if (!is_base_valid(base_from) || !is_base_valid(base_to))
		return (NULL);
	decimal_val = ft_atoi_base(nbr, base_from);
	return (ft_itoa_base(decimal_val, base_to));
}
