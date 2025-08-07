#include "utility.h"

int	is_valid(int grid[4][4], int row, int col, int value)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (grid[row][i] == value || grid[i][col] == value)
			return (0);
		i++;
	}
	return (1);
}

int	check_row_visibility(int *row, int left_clue, int right_clue)
{
	int	left_ok;
	int	right_ok;

	left_ok = check_visib_left(row, left_clue);
	right_ok = check_visib_right(row, right_clue);
	return (left_ok && right_ok);
}

int	build_row(int grid[4][4], int clues[4][4], int row, int col, int *indent_state)
{
	int	val;
	int	depth;

	depth = row * 4 + col;
	if (col == 4)
	{
		if (check_row_visibility(grid[row], clues[2][row], clues[3][row]))
			return (solve(grid, clues, row + 1, indent_state));
		return (0);
	}
	for (val = 1; val <= 4; val++)
	{
		if (is_valid(grid, row, col, val))
		{
			log_try(val, depth, (val == 4), indent_state);
			grid[row][col] = val;
			
			// On prépare l'état d'indentation pour le NIVEAU SUIVANT
			// Si val est le dernier essai (4), la branche se ferme.
			indent_state[depth] = (val != 4);

			if (build_row(grid, clues, row, col + 1, indent_state) == 1)
				return (1);
			
			// Si on arrive ici, c'est un échec, on backtrack
			grid[row][col] = 0;
		}
	}
	// Si la boucle for se termine sans trouver de solution, on log le backtrack pour ce niveau
	log_backtrack(depth, indent_state);
	return (0);
}

int	solve(int grid[4][4], int clues[4][4], int row_index, int *indent_state)
{
	if (row_index == 4)
	{
		return (check_col_visibility(grid, clues));
	}
	return (build_row(grid, clues, row_index, 0, indent_state));
}
