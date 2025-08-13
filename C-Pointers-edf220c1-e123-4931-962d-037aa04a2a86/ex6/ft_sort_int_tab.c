/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas.hairabedian <nicolas.hairabedia    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 18:22:35 by nicolas.hai       #+#    #+#             */
/*   Updated: 2025/08/12 13:50:51 by nicolas.hai      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab [j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}
//int	main(void)
//{
//	int size = 5;
//	int tab[5] = {5, 31, 4, 1, 42};
//	printf("%d, %d, %d, %d, %d\n", tab[0],tab[1],tab[2],tab[3],tab[4]);
//	ft_sort_int_tab(tab,size);
//	printf("%d, %d, %d, %d, %d\n", tab[0],tab[1],tab[2],tab[3],tab[4]);
//}