/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas.hairabedian <nicolas.hairabedia    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 18:23:17 by nicolas.hai       #+#    #+#             */
/*   Updated: 2025/08/10 00:03:16 by nicolas.hai      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "dictionary.h"

int	error_msg(char *err_msg)
{
	int	i;

	i = 0;
	while (err_msg[i] != '\0')
	{
		write(1, &err_msg[i], 1);
		i++;
	}
	return (1);
}


int	check_input(int argc, char **argv, char **file_dict, char **str_nbr)
{
	if (argc < 2 || argc > 3)
	{
		error_msg("Error\n");
		return (0);
	}
	if (argc == 2)
		*str_nbr = argv[1];
	else if (argc == 3)
	{
		*file_dict = argv[1];
		*str_nbr = argv[2];
	}
	return (1);
}

int	valid_number(char *str)
{
	int	i;

	if (!str || !str[0])
		return (0);
	if (str[0] == '+' || str[0] == '-')
		return (0);
	if (str[0] == '0' && str[1] != '\0')
		return (0);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	if (i > 37)
		return (0);
	return (1);
}

int	main(int argc, char **argv)
{
	char			*str_nbr;
	char			*file_dict;
	//t_dictionary	dict;

	//dict.len = 0;
	//dict.keys = malloc(sizeof(char *) * 41);
	//dict.values = malloc(sizeof(char *) * 41);
	file_dict = "numbers.dict";
	if (!check_input(argc, argv, &file_dict, &str_nbr))
		return (0);
	if (!valid_number(str_nbr))
	{
		error_msg("Error\n");
		return (0);
	}
	return (0);
}
