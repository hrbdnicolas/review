/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas.hairabedian <nicolas.hairabedia    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 13:56:45 by nicolas.hai       #+#    #+#             */
/*   Updated: 2025/08/11 17:14:27 by nicolas.hai      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_char(char c)
{
	write(1, &c, 1);
}

void	convert_hex(char d)
{
	char	*hex;

	hex = "0123456789abcdef";
	write(1, "\\", 1);
	put_char(hex[d / 16]);
	put_char(hex[d % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 31 || str[i] > 126)
			convert_hex(str[i]);
		else
			put_char(str[i]);
		i++;
	}
}

//int main()
//{
//	char *str = "Hello\nHow are you ?";
//	ft_putstr_non_printable(str);
//}