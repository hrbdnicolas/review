/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas.hairabedian <nicolas.hairabedia    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 17:28:40 by nicolas.hai       #+#    #+#             */
/*   Updated: 2025/08/12 18:58:51 by nicolas.hai      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 15;
}

int	main(void)
{
	int	n= 10;
	
	printf("%d\n", n);
	ft_ft(&n);
	printf(" n0 = %d\n", n);
	printf(" n1 = %d\n", n);
	return (0);
}
