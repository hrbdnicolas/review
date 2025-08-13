/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas.hairabedian <nicolas.hairabedia    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 11:42:15 by nicolas.hai       #+#    #+#             */
/*   Updated: 2025/08/04 12:58:35 by nicolas.hai      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	temp1;
	int	temp2;

	temp1 = a / b;
	temp2 = a % b;
	*div = temp1;
	*mod = temp2;
}
/*
int main(void)
{
	int	div = 0;
	int	mod = 0;
	
	ft_div_mod(0 ,2, &div, &mod);
	printf("le resultat de la division est %d et le resteest %d", div, mod);
	return (0);
}
*/