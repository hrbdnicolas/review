/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_packs_conditioner.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boris.hanicotte <boris.hanicotte@learner.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 18:34:39 by boris.hanicot     #+#    #+#             */
/*   Updated: 2025/08/10 18:37:14 by boris.hanicot    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	treat_hundreds(int pack, int *outputs, int *count)
{
	int	cent;

	cent = pack / 100;
	if (cent > 0)
	{
		outputs[*count] = cent;
		(*count)++;
		outputs[*count] = 100;
		(*count)++;
	}
}

void	treat_tens(int pack, int *outputs, int *count)
{
	int	dec;
	int	unit;
	int	value;

	dec = (pack / 10) % 10;
	unit = pack % 10;
	if (dec == 1)
	{
		value = 10 + unit;
		outputs[*count] = value;
		(*count)++;
	}
	if (dec >= 2)
	{
		value = dec * 10;
		outputs[*count] = value;
		(*count)++;
	}
}

void	treat_units(int pack, int *outputs, int *count)
{
	int	dec;
	int	unit;
	int	value;

	dec = (pack / 10) % 10;
	unit = pack % 10;
	if (unit > 0 && dec != 1)
	{
		value = unit;
		outputs[*count] = value;
		(*count)++;
	}
}

void	packsofthree_emitter(int pack, int *outputs, int *count)
{
	if (pack == 0)
		return ;
	treat_hundreds(pack, outputs, count);
	treat_tens(pack, outputs, count);
	treat_units(pack, outputs, count);
}
