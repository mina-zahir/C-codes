/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzahirjo <mzahirjo@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 11:18:15 by mzahirjo          #+#    #+#             */
/*   Updated: 2026/02/16 19:23:07 by mzahirjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		len;
	int		i;

	len = 0;
	while (src[len])
		len++;
	dest = malloc((sizeof(char)) * (len +1));
	if (!dest)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	int			size;
	t_stock_str	*o_arr;

	o_arr = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!o_arr)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		if (o_arr[i] == NULL)
			return (NULL);
		o_arr[i].size = ft_strlen(av[i]);
		o_arr[i].str = av[i];
		o_arr[i].copy = ft_strdup(av[i]);
		if (!o_arr[i].copy)
			return (NULL);
		i++;
	}
	o_arr[i].str = 0;
	return (o_arr);
}
