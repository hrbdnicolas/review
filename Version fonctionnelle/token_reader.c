/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   token_reader.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natanael.turcot <natanael.turcot@learner.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 17:15:06 by natanael.turc     #+#    #+#             */
/*   Updated: 2025/08/10 18:27:51 by boris.hanicot    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	read_file(int *i, char *buffer)
{
	int	file_number;

	file_number = 0;
	while (buffer[*i] >= '0' && buffer[*i] <= '9')
	{
		file_number = file_number * 10 + (buffer[*i] - '0');
		(*i)++;
	}
	return (file_number);
}

int	copy_word(int *i, char *buffer, int len, char *number)
{
	int	j;

	j = 0;
	while (*i < len && buffer[*i] != '\n' && buffer[*i] != '\0')
	{
		number[j] = buffer[*i];
		(*i)++;
		j++;
	}
	number[j] = '\0';
	return (1);
}

int	match_key_numeric(int token, char *buffer, int len, int *i)
{
	int	pos;
	int	file_number;

	(void)len;
	pos = *i;
	file_number = read_file(&pos, buffer);
	*i = pos;
	while (*i >= 0 && (buffer[*i] == ' ' || buffer[*i] == ':'
			|| buffer[*i] == '\t'))
		(*i)++;
	return (file_number == token);
}

int	match_key_scale(int token, char *buffer, int len, int *i)
{
	int	pos;
	int	digits;
	int	ok;

	pos = *i;
	digits = 0;
	ok = 1;
	while (pos < len && buffer[pos] >= '0' && buffer[pos] <= '9')
	{
		if ((digits == 0 && buffer[pos] != '1')
			|| (digits > 0 && buffer[pos] != '0'))
			ok = 0;
		pos++;
		digits++;
	}
	*i = pos;
	while (*i < len && (buffer[*i] == ' ' || buffer[*i] == ':'
			|| buffer[*i] == '\t'))
		(*i)++;
	if (digits != 1 + 3 * (-token))
		return (0);
	return (ok);
}

int	token_reader(int token, char *number, char *buffer, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		if ((token >= 0 && match_key_numeric(token, buffer, len, &i))
			|| (token < 0 && match_key_scale(token, buffer, len, &i)))
			return (copy_word(&i, buffer, len, number));
		while (i < len && buffer[i] != '\n' && buffer[i] != '\0')
			i++;
		if (i < len && buffer[i] == '\n')
			i++;
	}
	return (0);
}
