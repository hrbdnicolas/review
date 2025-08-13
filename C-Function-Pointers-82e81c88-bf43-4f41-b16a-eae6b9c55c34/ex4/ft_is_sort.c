/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas.hairabedian <nicolas.hairabedia    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 18:00:56 by nicolas.hai       #+#    #+#             */
/*   Updated: 2025/08/12 21:08:38 by nicolas.hai      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

//int	is_compare(int a, int b)
//{
//	return (a - b);
//}

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	ascending;
	int	descending;

	i = 0;
	ascending = 1;
	descending = 1;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) < 0)
			ascending = 0;
		if (f(tab[i], tab[i + 1]) > 0)
			descending = 0;
		i++;
	}
	if (ascending == 1 || descending == 1)
		return (1);
	else
		return (0);
}

//int main()
//{
//	int tab1[] = {1, 2, 3, 4, 5};
//	int tab2[] = {-93, -87, -60, -37, -9, 19, 35, 66, 66, 76, 89, 89, 98};
//	int tab3[] = {5, 4, 3, 2, 1};
//	int tab4[] = {1, 2, 3, 6, 5};

//	printf("%d\n", ft_is_sort(tab1, 5, &is_compare));
//	printf("%d\n", ft_is_sort(tab2, 13, &is_compare));
//	printf("%d\n", ft_is_sort(tab3, 5, &is_compare));
//	printf("%d\n", ft_is_sort(tab4, 5, &is_compare));
//}

