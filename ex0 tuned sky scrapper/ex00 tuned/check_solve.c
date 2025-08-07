/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_solve.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agnes.rosay <agnes.rosay@learner.42.tech>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 15:37:08 by agnes.rosay       #+#    #+#             */
/*   Updated: 2025/08/03 17:32:34 by boris.hanicot    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utility.h"

int	check_visib_left(int *row, int left)
{
	int	visible_left;
	int	max_left;
	int	i;

	visible_left = 0;
	max_left = 0;
	i = 0;
	while (i < 4)
	{
		if (row[i] > max_left)
		{
			visible_left++;
			max_left = row[i];
		}
		i++;
	}
	if (visible_left == left)
		return (1);
	else
		return (0);
}

int	check_visib_right(int *row, int right)
{
	int	visible_right;
	int	max_right;
	int	j;

	visible_right = 0;
	max_right = 0;
	j = 3;
	while (j >= 0)
	{
		if (row[j] > max_right)
		{
			visible_right++;
			max_right = row[j];
		}
		j--;
	}
	if (visible_right == right)
		return (1);
	else
		return (0);
}

int	check_col_visibility(int grid[4][4], int clues[4][4])
{
	int	col;
	int	row;
	int	column[4];

	col = 0;
	while (col < 4)
	{
		row = 0;
		while (row < 4)
		{
			column[row] = grid[row][col];
			row++;
		}
		if (!check_visib_left(column, clues[0][col]) ||
		!check_visib_right(column, clues[1][col]))
		{
			return (0);
		}
		col++;
	}
	return (1);
}
