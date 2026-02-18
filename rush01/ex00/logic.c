/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   logic.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olpachec <olpachec@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 19:34:12 by olpachec          #+#    #+#             */
/*   Updated: 2026/02/07 22:15:50 by mzahirjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_visible(int line[4])
{
	int	i;
	int	count_visible;
	int	max_height;

	i = 0;
	count_visible = 0;
	max_height = 0;
	while (i < 4)
	{
		if (line[i] > max_height)
		{
			count_visible++;
			max_height = line[i];
		}
		i++;
	}
	return (count_visible);
}

int	is_safe_num(int grid[4][4], int row, int col, int num)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (i != col && grid[row][i] == num)
			return (0);
		if (i != row && grid[i][col] == num)
			return (0);
		i++;
	}
	return (1);
}

int	check_rows(int grid[4][4], int *clues)
{
	int	i;
	int	j;
	int	line[4];

	i = 0;
	while (i < 4)
	{
		j = -1;
		while (++j < 4)
			line[j] = grid[i][j];
		if (ft_count_visible(line) != clues[8 + i])
			return (0);
		j = -1;
		while (++j < 4)
			line[j] = grid[i][3 - j];
		if (ft_count_visible(line) != clues[12 + i])
			return (0);
		i++;
	}
	return (1);
}

int	check_cols(int grid[4][4], int *clues)
{
	int	i;
	int	j;
	int	line[4];

	i = 0;
	while (i < 4)
	{
		j = -1;
		while (++j < 4)
			line[j] = grid[j][i];
		if (ft_count_visible(line) != clues[i])
			return (0);
		j = -1;
		while (++j < 4)
			line[j] = grid[3 - j][i];
		if (ft_count_visible(line) != clues[4 + i])
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
int	main(void)
{
	int row1[4] = {1, 2, 3, 4};
	int	row2[4] = {2, 3, 4, 1};
	int	row3[4] = {3, 4, 1, 2};
	int	row4[4] = {4, 1, 2, 3};

	printf("Row1 {1, 2, 3, 4} -> 
	Visible: %d (Espected: 4)\n", ft_count_visible(row1));
	printf("Row2 {4, 3, 2, 1} -> 
	Visible: %d (Espected: 1)\n", ft_count_visible(row2));
	printf("Row3 {2, 1, 4, 3} -> 
	Visible: %d (Espected: 2)\n", ft_count_visible(row3));
	printf("Row4 {1, 3, 4, 2} -> 
	Visible: %d (Espected: 3)\n", ft_count_visible(row4));
}*/
/*
#include <stdio.h>

int ft_count_visible(int line[4]);
int check_rows(int grid[4][4], int *clues);
int check_cols(int grid[4][4], int *clues);

int main(void)
{

	int clues[16] = {4, 3, 2, 1, 1, 2, 2, 2, 4, 3, 1, 1, 1, 2, 2, 2};

	int grid[4][4] = {
		{1, 2, 3, 4},
		{2, 3, 4, 1},
		{3, 4, 1, 2},
		{4, 1, 2, 3}
	};


	printf("Check Rows: %s\n", check_rows(grid, clues) ? "OK" : "ERROR");
	printf("Check Colums: %s\n", check_cols(grid, clues) ? "OK" : "ERROR");

	if (check_rows(grid, clues) && check_cols(grid, clues))
		printf("\n¡Result: The tab is VALID for this clues!\n");
	else
		printf("\nResult: The tab  is NOT valid.\n");

	return (0);
}*/
