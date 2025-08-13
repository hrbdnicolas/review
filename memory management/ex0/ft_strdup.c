/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas.hairabedian <nicolas.hairabedia    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 21:28:15 by nicolas.hai       #+#    #+#             */
/*   Updated: 2025/08/13 16:22:39 by nicolas.hai      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	dest = malloc(sizeof(char) * (ft_strlen(src)+ 1));
	if (!dest)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		if ()

		i++;
	}
	dest[i] = '\0';
	return (dest);
}

//int main()
//{
//	char *src = "Hello worrrrrrrrrrrrrrrrrrrrrrrrld";
//	char *dupli;
//	int i;

//	dupli = ft_strdup(src);
//	printf("%s\n", src);
//	dupli[0] = 'h';
//	printf("%s\n", dupli);
//	//i =0;
//	//while (dupli[i])
//	//	{
//	//		printf("%c\n", dupli[i]);
//	//		i++;
//	//	}
//	return (0);
	
//}
