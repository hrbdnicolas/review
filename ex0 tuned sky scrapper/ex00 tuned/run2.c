#include "utility.h"

void	init_grid(int grid[4][4])
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

int	ft_handle_char(char c, int *indexes, int *array_idx)
{
	if (c == ' ')
		return (1);
	if (c < '1' || c > '4')
		return (0);
	if (*array_idx >= 16)
		return (0);
	indexes[*array_idx] = c - '0';
	(*array_idx)++;
	return (1);
}

int	ft_argv_to_indexes(int *indexes, char *arg_string)
{
	int	string_idx;
	int	array_idx;

	string_idx = 0;
	array_idx = 0;
	while (arg_string[string_idx] != '\0')
	{
		if (ft_handle_char(arg_string[string_idx], indexes, &array_idx) == 0)
			return (0);
		string_idx++;
	}
	if (array_idx != 16)
		return (0);
	return (1);
}

int	init_and_parse(int argc, char **argv, int **indexes)
{
	if (argc != 2)
	{
		display_error();
		return (1);
	}
	*indexes = malloc(sizeof(int) * 16);
	if (*indexes == NULL)
		return (1);
	if (ft_argv_to_indexes(*indexes, argv[1]) == 0)
	{
		display_error();
		free(*indexes);
		return (1);
	}
	return (0);
}

void	run(int *indexes)
{
	int	clues[4][4];
	int	grid[4][4];
	int	found;
	int indent_state[16];
	int i;

	// Initialisation du tableau d'état
	for (i = 0; i < 16; i++)
		indent_state[i] = 1;

	init_grid(grid);
	sort_idx(indexes, clues);
	if (check_comb(clues) == 0)
	{
		display_error();
		return ;
	}
	write(1, "Arbre d'exploration:\n.\n", 24);
	found = solve(grid, clues, 0, indent_state);
	if (found == 1)
	{
		write(1, "\nSolution trouvee:\n", 19);
		print_grid(grid);
	}
	else
	{
		display_error();
	}
}
