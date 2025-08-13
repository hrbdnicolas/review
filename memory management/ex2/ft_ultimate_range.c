/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas.hairabedian <nicolas.hairabedia    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 14:37:08 by nicolas.hai       #+#    #+#             */
/*   Updated: 2025/08/13 16:21:51 by nicolas.hai      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	*range = (int *)malloc(sizeof(int) * size);
	if (!range)
	{
		*range = NULL;
		return (-1);
	}
	i = 0;
	while (i < size)
	{
		(*range)[i] = min + 1;
		i++;
	}
	return (size);
}

//int main()
//{
//	int *get[] = {" hello", "je", "heec"};

//	int sort;
//	int min = 546;
//	int max = 15000;

//	sort = ft_ultimate_range(get, min, max);
	
	
//		printf("%d\n", sort);


//	return (0);
//}

