/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_comb.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boris.hanicotte <boris.hanicotte@learner.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 17:10:11 by boris.hanicot     #+#    #+#             */
/*   Updated: 2025/08/03 17:31:50 by boris.hanicot    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utility.h"

void	sort_idx(int *indexes, int clues[4][4])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		clues[0][i] = indexes[i];
		clues[1][i] = indexes[i + 4];
		clues[2][i] = indexes[i + 8];
		clues[3][i] = indexes[i + 12];
		i++;
	}
}

int	check_comb(int clues[4][4])
{
	int	j;
	int	row_sum;
	int	col_sum;

	j = 0;
	while (j < 4)
	{
		row_sum = clues[2][j] + clues[3][j];
		if (row_sum <= 2 || row_sum >= 6)
			return (0);
		col_sum = clues[0][j] + clues[1][j];
		if (col_sum <= 2 || col_sum >= 6)
			return (0);
		j++;
	}
	return (1);
}
