/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzahirjo <mzahirjo@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 16:00:19 by mzahirjo          #+#    #+#             */
/*   Updated: 2026/02/08 15:29:53 by mzahirjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_parse(char *str, int *clues);
int		is_safe_num(int grid[4][4], int row, int col, int num);
int		check_rows(int grid[4][4], int *clues);
int		check_cols(int grid[4][4], int *clues);
int		ft_solve(int grid[4][4], int *clues, int pos);
void	ft_display_grid(int grid[4][4]);
void	ft_putstr(char *str);

void	zero_grid(int grid[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	clues[16];
	int	grid[4][4];

	zero_grid(grid);
	if (argc != 2 || ft_parse(argv[1], clues) == 0)
	{
		ft_putstr("Error\n");
		return (0);
	}
	if (ft_solve(grid, clues, 0) == 1)
	{
		ft_display_grid(grid);
	}
	else
	{
		ft_putstr("Error\n");
	}
	return (0);
}
