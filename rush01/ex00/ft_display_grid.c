/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olpachec <olpachec@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 16:03:45 by olpachec          #+#    #+#             */
/*   Updated: 2026/02/07 18:00:40 by olpachec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_display_grid(int grid[4][4])
{
	int		row;
	int		col;
	char	c;

	row = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			c = grid[row][col] + '0';
			write(1, &c, 1);
			if (col < 3)
				write(1, " ", 1);
			col++;
		}
		write(1, "\n", 1);
		row++;
	}
}
/*
int	main(void)
{
	int	tab[4][4];

	tab[4][4] = {
	{1, 2, 3, 4},
	{2, 3, 4, 1},
	{3, 4, 1, 2},
	{4, 1, 2, 3}
	};
	ft_display_grid(tab);
	return (0);
}*/
