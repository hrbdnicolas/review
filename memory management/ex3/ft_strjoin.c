/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas.hairabedian <nicolas.hairabedia    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 16:32:24 by nicolas.hai       #+#    #+#             */
/*   Updated: 2025/08/13 20:12:07 by nicolas.hai      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char **tab)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	
	count = 0;
	while (tab[i])
	{
		j = 0;
		while (tab[i][j])
		{
			count++;
			j++;
		}
		i++;
	}
	return (count);
}

int	ft_seplen(char *sep)
{
	int	i;

	i = 0;
	while (sep[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;
	int	length;

	i = 0;
	length = 0;
	while (dest[length])
		length++;
	while (src[i])
	{
		dest[length + i] = src[i];
		i++;
	}
	dest[length + i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		i;

	if (size < 1)
		return (NULL);
	result = malloc(sizeof(char) * (ft_strlen(strs)
				+ (ft_seplen(sep) * size + 1)));
	if (!result)
		return (NULL);
	i = 0;
	while (i < size)
	{
		result = ft_strcpy(result, strs[i]);
		if (strs[i])
			result = ft_strcpy(result, sep);
		i++;
	}
	return (result);
}

int main()
{
	char *tab[] = {"oi", "je", "te", "as"};
	char *ar;
	char *sep = " ";
	int size = 4;

	ar = ft_strjoin(size, tab, sep);
	printf("%s\n", ar);
}
