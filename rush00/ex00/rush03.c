/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzahirjo <mzahirjo@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 10:31:26 by mzahirjo          #+#    #+#             */
/*   Updated: 2026/01/31 16:57:15 by mzahirjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print(int row, int col, int max_col, int max_row)
{
	char	left_corners;
	char	right_corners;
	char	filling;

	left_corners = 'A';
	right_corners = 'C';
	filling = 'B';
	if ((row == 1 || row == max_row) && col == 1)
	{
		ft_putchar(left_corners);
	}
	else if ((row == 1 || row == max_row) && col == max_col)
	{
		ft_putchar(right_corners);
	}
	else if (col == 1 || col == max_col || row == 1 || row == max_row)
	{
		ft_putchar(filling);
	}
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	row;
	int	col;

	if (x < 1 || y < 1)
		return ;
	row = 1;
	while (row <= y)
	{
		col = 1;
		while (col <= x)
		{
			ft_print(row, col, x, y);
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}
