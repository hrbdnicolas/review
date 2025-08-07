#include "utility.h"

// Affiche l'indentation en se basant sur l'état des branches
static void	print_indent(int depth, int *indent_state)
{
	int i;

	i = 0;
	while (i < depth)
	{
		if (indent_state[i])
			write(1, "|   ", 4); // Branche ouverte, on continue le trait vertical
		else
			write(1, "    ", 4); // Branche fermée, on met un espace
		i++;
	}
}

// Affiche la tentative
void	log_try(int value, int depth, int is_last, int *indent_state)
{
	print_indent(depth, indent_state);

	if (is_last)
		write(1, "\\------ ", 8);
	else
		write(1, "+-- ", 4);

	ft_putnbr(value);
	ft_putchar('\n');
}

// Affiche le message de retour en arrière
void	log_backtrack(int depth, int *indent_state)
{
	print_indent(depth, indent_state);
	write(1, "<--\n", 4);
}
