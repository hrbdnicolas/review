/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wissem.boussaha <wissem.boussaha@learner>  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-08-09 08:25:56 by wissem.boussaha   #+#    #+#             */
/*   Updated: 2025/08/11 17:24:38 by boris.hanicot    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		nbr_from_str(char *str_nbr, int *outputs, int max_outputs);
void	print_tokens(int *token, int size);

int	is_space(int a)
{
	if (a == 9 || a == 10 || a == 11 || a == 12 || a == 13 || a == 32)
		return (1);
	return (0);
}

int	atoi_char(const char *str, char *output)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (is_space(str[i]))
		i++;
	if (str[i] == '+')
		i++;
	if (str[i] == '-')
		return (0);
	if (!(str[i] >= '0' && str[i] <= '9'))
		return (0);
	while (str[i] >= '0' && str[i] <= '9')
	{
		output[j] = str[i];
		i++;
		j++;
	}
	output[j] = '\0';
	return (1);
}

int	main(int argc, char **argv)
{
	char	clean_number[64];
	int		tokens[1024];
	int		token_count;

	if (argc != 2)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	if (!atoi_char(argv[1], clean_number))
	{
		write(1, "Error\n", 6);
		return (1);
	}
	token_count = nbr_from_str(clean_number, tokens, 1024);
	if (token_count <= 0)
	{
		write(1, "Dict Error\n", 11);
		return (1);
	}
	print_tokens(tokens, token_count);
	return (0);
}
