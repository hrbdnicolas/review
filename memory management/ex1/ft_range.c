/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas.hairabedian <nicolas.hairabedia    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 22:11:33 by nicolas.hai       #+#    #+#             */
/*   Updated: 2025/08/12 23:03:27 by nicolas.hai      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	size;
	int	i;

	if (min >= max)
		return (NULL);
	size = max - min;
	range = malloc(sizeof(int) * size);
	if (!range)
		return (NULL);
	i = 0;
	while (i < size)
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}

//int main()
//{
//	int i = 0;
//	int *range;
//	int min = -42;
//	int max = 58;

//	range = ft_range(min, max);

//	while (i < (max - min))
//	{
//		printf("%d\n", range[i]);
//		i++;
//	}
//}
