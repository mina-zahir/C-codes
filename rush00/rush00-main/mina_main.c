/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzahirjo <mzahirjo@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 10:26:28 by mzahirjo          #+#    #+#             */
/*   Updated: 2026/01/31 12:57:51 by mzahirjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	rush(int x, int y);

int	main(void)
{
	rush (5, 3);
	ft_putchar('\n');	
	rush (5, 1);
	ft_putchar('\n');
	rush (1, 1);
	ft_putchar('\n');
	rush (1, 5);
	ft_putchar('\n');
	rush (-4, -4);
	ft_putchar('\n');
	rush (4, 4);
	return (0);
}
