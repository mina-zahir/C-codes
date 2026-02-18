/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olpachec <olpachec@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 16:38:03 by olpachec          #+#    #+#             */
/*   Updated: 2026/02/08 17:05:29 by olpachec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_safe_num(int grid[4][4], int row, int col, int num);
int	check_rows(int grid[4][4], int *clues);
int	check_cols(int grid[4][4], int *clues);

int	ft_solve(int grid[4][4], int *clues, int pos)
{
	int	num;
	int	row;
	int	col;

	if (pos == 16)
	{
		if (check_rows(grid, clues) && check_cols(grid, clues))
			return (1);
		return (0);
	}
	row = pos / 4;
	col = pos % 4;
	num = 1;
	while (num <= 4)
	{
		if (is_safe_num(grid, row, col, num))
		{
			grid[row][col] = num;
			if (ft_solve(grid, clues, pos + 1) == 1)
				return (1);
			grid[row][col] = 0;
		}
		num++;
	}
	return (0);
}
