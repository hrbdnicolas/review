/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas.hairabedian <nicolas.hairabedia    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 16:01:48 by nicolas.hai       #+#    #+#             */
/*   Updated: 2025/08/11 17:14:44 by nicolas.hai      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

//int	if_w_first(char *tab)
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

int	ft_any(char **tab, int (*f)(char*))
{
	int	i;

	i = 0;
	while (tab[i])
	{
		if (f(tab[i]))
			return (1);
		i++;
	}
	return (0);
}

//int main()
//{
//	char *tab[] = {"ello", "ko1rld", "jall", NULL};
//	int result = ft_any(tab, &if_w_first);
//	printf("%d\n", result);
//}