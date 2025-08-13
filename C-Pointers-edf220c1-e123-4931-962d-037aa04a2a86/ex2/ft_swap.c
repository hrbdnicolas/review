/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas.hairabedian <nicolas.hairabedia    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 20:30:15 by nicolas.hai       #+#    #+#             */
/*   Updated: 2025/08/04 13:01:39 by nicolas.hai      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;
	int	tmp2;

	tmp = *a;
	tmp2 = *b;
	*a = tmp2;
	*b = tmp;
}
/*
int main(void)
{
	int n = 54;
	int p = 74;
	ft_swap(&n, &p);
	printf("%d, %d", n, p);
}
*/	