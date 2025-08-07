#ifndef UTILITY_H
# define UTILITY_H

/*
** - Librairies Standard -------------------------------------------------------
*/

# include <stdlib.h>
# include <unistd.h>

/*
** - Fonctions de main.c -------------------------------------------------------
*/

int		main(int argc, char **argv);

/*
** - Fonctions de run.c --------------------------------------------------------
*/

void	init_grid(int grid[4][4]);
int		ft_handle_char(char c, int *indexes, int *array_idx);
int		ft_argv_to_indexes(int *indexes, char *arg_string);
int		init_and_parse(int argc, char **argv, int **indexes);
void	run(int *indexes);

/*
** - Fonctions de index_comb.c -------------------------------------------------
*/

void	sort_idx(int *indexes, int clues[4][4]);
int		check_comb(int clues[4][4]);

/*
** - Fonctions de solve.c ------------------------------------------------------
*/

int		solve(int grid[4][4], int clues[4][4], int row_index, int *indent);
int		build_row(int grid[4][4], int clues[4][4], int row, int col, int *indent);
int		is_valid(int grid[4][4], int row, int col, int value);
int		check_row_visibility(int *row, int left_clue, int right_clue);

/*
** - Fonctions de check_solve.c ------------------------------------------------
*/

int		check_col_visibility(int grid[4][4], int clues[4][4]);
int		check_visib_left(int *row, int left);
int		check_visib_right(int *row, int right);

/*
** - Fonctions de print.c ------------------------------------------------------
*/

void	print_grid(int grid[4][4]);
void	ft_putnbr(int n);
void	ft_putchar(char c);
void	display_error(void);

/*
** - Fonctions de tree.c -------------------------------------------------------
*/

void	log_try(int value, int depth, int is_last, int *indent_state);
void	log_backtrack(int depth, int *indent_state);

#endif
