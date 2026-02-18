/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzahirjo <mzahirjo@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 18:44:44 by mzahirjo          #+#    #+#             */
/*   Updated: 2026/02/09 08:47:50 by mzahirjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fact;

	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	fact = 1;
	while (nb > 1)
	{
		fact = fact * nb;
		nb--;
	}
	return (fact);
}
