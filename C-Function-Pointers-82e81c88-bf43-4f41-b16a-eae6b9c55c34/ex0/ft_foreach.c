/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas.hairabedian <nicolas.hairabedia    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 17:47:50 by nicolas.hai       #+#    #+#             */
/*   Updated: 2025/08/12 21:09:00 by nicolas.hai      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

//void	ft_putchar(char c)
//{
//	write(1, &c, 1);
//}

//void	ft_putnbr(int nb)
//{
//	if (nb == -2147483648)
//		write(1, "-2147483648", 11);
//	if (nb < 0)
//	{
//		write(1, "-", 1);
//		nb = -nb;
//	}
//	if (nb > 9)
//		ft_putnbr(nb / 10);
//	ft_putchar((nb % 10) + '0');
//}

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

//int	main(void)
//{
//	int	tab[5] = {1, 2, 3, 5, 6};

//	ft_foreach(tab, 5, &ft_putnbr);
//}
