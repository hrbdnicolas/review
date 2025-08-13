/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas.hairabedian <nicolas.hairabedia    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 17:15:25 by nicolas.hai       #+#    #+#             */
/*   Updated: 2025/08/12 21:03:40 by nicolas.hai      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

//int start_with_w(char *tab)
//{
//	int	i;

//	i = 0;
//	while (tab[i])
//	{
//		if (tab[i] >= '0' && tab[i] <= '9')
//			return (1);
//		i++;
//	}
//	return (0);
//}

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (i < length)
	{
		if (f(tab[i]))
			count++;
		i++;
	}
	return (count);
}

//int main()
//{
//	int length;
//	char *tab[] = {"hell1o", "ou1i", "je nai ri1en a dire", "i1ci"};

//	length = 4;
//	printf("%d\n", ft_count_if(tab, length, start_with_w));
//}