/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbeck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 10:15:06 by thbeck            #+#    #+#             */
/*   Updated: 2024/08/19 11:22:54 by thbeck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned char	ft_char_hex(int hex)
{
	unsigned char	output;

	if (hex <= 9)
		output = hex + 48;
	if (hex > 9)
		output = hex + 87;
	return (output);
}

void	ft_putstr_non_printable(unsigned char *str)
{
	unsigned char		char_div;
	unsigned char		char_mod;
	int					hex_div;
	int					hex_mod;

	while (*str)
	{
		if (*str < ' ' || *str > '~')
		{
			hex_div = *str / 16;
			hex_mod = *str % 16;
			char_div = ft_char_hex(hex_div);
			char_mod = ft_char_hex(hex_mod);
			write(1, "\\", 1);
			write(1, &char_div, 1);
			write(1, &char_mod, 1);
		}
		else
			write(1, &*str, 1);
		str++;
	}
}

/*int	main(void)
{
	unsigned char* str;
	str = (unsigned char *)"abcd\azefq";
	ft_putstr_non_printable(str);
	return (0);
}*/
