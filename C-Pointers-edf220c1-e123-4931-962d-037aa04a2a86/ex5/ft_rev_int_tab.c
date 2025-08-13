/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas.hairabedian <nicolas.hairabedia    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 13:21:08 by nicolas.hai       #+#    #+#             */
/*   Updated: 2025/08/05 15:05:24 by nicolas.hai      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = temp;
		i++;
	}
}
//int	main(void)
//{
//	int size = 5;
//	int tab[5] = { 1, 2, 3, 4, 5};
//	printf("%d, %d, %d, %d, %d\n", tab[0],tab[1],tab[2],tab[3],tab[4]);
//	ft_rev_int_tab(tab,size);
//	printf("%d, %d, %d, %d, %d\n", tab[0],tab[1],tab[2],tab[3],tab[4]);
//	return (0);
//}