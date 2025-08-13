/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conditioners_bridge.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boris.hanicotte <boris.hanicotte@learner.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 18:30:59 by boris.hanicot     #+#    #+#             */
/*   Updated: 2025/08/10 19:41:38 by boris.hanicot    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	packsofthree_emitter(int pack, int *outputs, int *count);
int		pack_filler(char *str_nbr, int *packs, int *pmax);

void	scale_code_emitter(int pack, int scale_idx, int *outputs, int *count)
{
	if (scale_idx <= 0 || pack == 0)
		return ;
	outputs[*count] = -scale_idx;
	(*count)++;
}

int	ft_transmitter(int *packs, int pmax, int *outputs, int max_outputs)
{
	int	i;
	int	count;

	count = 0;
	i = pmax - 1;
	while (i >= 0)
	{
		if (packs[i] != 0)
		{
			if (count < max_outputs)
			{
				packsofthree_emitter(packs[i], outputs, &count);
			}
			if (count < max_outputs)
			{
				scale_code_emitter(packs[i], i, outputs, &count);
			}
		}
		i--;
	}
	return (count);
}

int	nbr_from_str(char *str_nbr, int *outputs, int max_outputs)
{
	int	packs[32];
	int	pmax;

	pmax = 0;
	if (pack_filler(str_nbr, packs, &pmax) <= 0)
		return (0);
	if (pmax == 1 && packs[0] == 0)
	{
		if (max_outputs > 0)
		{
			outputs[0] = 0;
		}
		return (1);
	}
	return (ft_transmitter(packs, pmax, outputs, max_outputs));
}
