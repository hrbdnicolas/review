/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas.hairabedian <nicolas.hairabedian@  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 19:31:09 by nicolas.haira     #+#    #+#             */
/*   Updated: 2025/07/30 22:30:36 by nicolas.haira    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_combn(int tab[], int pos, int start, int n)
{
	int	i;

	if (pos == n)
	{
		i = 0;
		while (i < n)
		{
			ft_putchar(tab[i] + 48);
			i++;
		}
		if (tab[0] < 10 - n)
		{
			write(1, ", ", 2);
		}
		return ;
	}
	i = start;
	while (i <= 9 - (n - pos -1))
	{
		tab[pos] = i;
		ft_combn(tab, pos + 1, i + 1, n);
		i++;
	}
}

void	ft_print_combn(int n)
{
	int	tab[10];

	if (n > 0 && n < 10)
		ft_combn(tab, 0, 0, n);
}


int main(void)
{
	ft_print_combn(1);
	ft_putchar('\n');
	ft_print_combn(2);
	ft_putchar('\n');
	ft_print_combn(9);
}
