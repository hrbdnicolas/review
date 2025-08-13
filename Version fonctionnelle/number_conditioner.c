/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   number_conditioner.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boris.hanicotte <boris.hanicotte@learner.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 18:37:46 by boris.hanicot     #+#    #+#             */
/*   Updated: 2025/08/11 17:31:47 by boris.hanicot    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str_nbr)
{
	int	len;

	len = 0;
	while (str_nbr[len])
	{
		len++;
		if (len > 39)
		{
			write(1, "Dict Error\n", 11);
			return (0);
		}
	}
	return (len);
}

int	ft_pack_splitter(char *str_nbr, int *str_idx, int end_idx)
{
	int	pack_val;
	int	pos;
	int	multi;
	int	digit_value;

	pack_val = 0;
	pos = 0;
	multi = 1;
	while (pos < 3 && *str_idx > end_idx)
	{
		(*str_idx)--;
		digit_value = str_nbr[*str_idx] - '0';
		pack_val += digit_value * multi;
		multi = multi * 10;
		pos++;
	}
	return (pack_val);
}

int	pack_filler(char *str_nbr, int *packs, int *pmax)
{
	int	len;
	int	str_idx;
	int	pack_idx;
	int	end_idx;

	len = ft_strlen(str_nbr);
	str_idx = len;
	pack_idx = 0;
	while (str_idx > 0)
	{
		if (str_idx >= 3)
			end_idx = str_idx - 3;
		else
			end_idx = 0;
		packs[pack_idx] = ft_pack_splitter(str_nbr, &str_idx, end_idx);
		pack_idx++;
	}
	*pmax = pack_idx;
	return (pack_idx);
}
