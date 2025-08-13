/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printer.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boris.hanicotte <boris.hanicotte@learner.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 20:16:36 by boris.hanicot     #+#    #+#             */
/*   Updated: 2025/08/11 17:35:39 by boris.hanicot    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int	token_reader(int token, char *number, char *buffer, int len);

int	str_len(char *list)
{
	int	i;

	i = 0;
	while (list[i])
		i++;
	return (i);
}

int	read_dict(char *buffer, int cap)
{
	int	fd;
	int	len;

	fd = open("numbers.dict", O_RDONLY);
	if (fd < 0)
		return (0);
	len = read(fd, buffer, cap - 1);
	if (len <= 0)
	{
		close(fd);
		return (0);
	}
	buffer[len] = '\0';
	close (fd);
	return (len);
}

void	print_tokens(int *token, int size)
{
	int		first;
	int		len;
	int		i;
	char	buffer[8192];
	char	number[1024];

	len = read_dict(buffer, (int) sizeof(buffer));
	if (len <= 0)
		return ;
	i = 0;
	first = 1;
	while (i < size)
	{
		if (token_reader(token[i], number, buffer, len))
		{
			if (!first)
				write(1, " ", 1);
			write(1, number, str_len(number));
			first = 0;
		}
		i++;
	}
	write(1, "\n", 1);
}
