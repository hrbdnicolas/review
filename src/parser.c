/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jean.nicolas-de-lamballerie <jean.nicolas  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 15:34:57 by jean.nicolas-     #+#    #+#             */
/*   Updated: 2025/08/09 18:24:44 by jean.nicolas-    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

// This result type will contain whether a file parsing was successful or not.
// the int `error` will be 0 if it successfully accessed the file,
// and 1 if it failed.
typedef struct s_file_result
{
	int		error;
	char	*v;
}			t_file_result;

// This function will access the dictionary at the specified path. We can technically loop twice over the last character,
// but that should not be an issue.
void	count_lines(int file)
{
	char	character;
	int		counter;
	int		line_already_counted;
	int		value;

	value = 1;
	counter = 0;
	line_already_counted = 0;
	while (value)
	{
		value = read(file, &character, 1);
		if (value == -1)
			return;
		if (character == ':' && !line_already_counted)
		{
			line_already_counted = 1;
			counter++;
		}
		if (character == '\n')
			line_already_counted = 0;
	}
	printf("\n file : %d - %d \n", file, counter);
}
//
// void	parse_value(void)
// {
// }
// //
// int	main(void)
// {
// 	int	i;
//
// 	i = open("dictionary/numbers.dict", O_RDONLY);
// 	count_lines(i);
// }
