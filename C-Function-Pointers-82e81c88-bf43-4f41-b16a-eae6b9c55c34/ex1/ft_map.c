/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas.hairabedian <nicolas.hairabedia    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 18:52:17 by nicolas.hai       #+#    #+#             */
/*   Updated: 2025/08/12 20:59:26 by nicolas.hai      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <unistd.h>
//#include <stdio.h>

//int	result_add(int n)
//{
//	return n+1;
//}

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*result;
	int	i;

	result = malloc(sizeof(int) * length);
	if (!result)
		return (NULL);
	i = 0;
	while (i < length)
	{
		result[i] = f(tab[i]);
		i++;
	}
	return (result);
}

//int main()
//{
//	int i;
//	int	tab[] = {1, 2, 3, 4, 5} ;
//	int length = 5;

//	int *soluc = ft_map(tab, 5, &result_add);
//i=0;
//	while (i < length)
//	{
//	printf("%d\n", soluc[i]);
//	i++;
//	}
//	free(soluc);
//}
