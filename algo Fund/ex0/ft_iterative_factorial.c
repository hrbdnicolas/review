/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas.hairabedian <nicolas.hairabedian@  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 14:26:10 by nicolas.haira     #+#    #+#             */
/*   Updated: 2025/07/31 12:17:23 by nicolas.haira    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int	ft_iterative_factorial(int nb)
{
	int	i;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	i = 1;
	while (nb >= 1)
	{
		i = nb * i;
		nb--;
	}
	return (i);
}
/*
int main(void)
{
        printf("%d\n", ft_iterative_factorial(5));
        return (0);
}
*/
