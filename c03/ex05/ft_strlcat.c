/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbeck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 15:50:13 by thbeck            #+#    #+#             */
/*   Updated: 2024/08/21 21:25:18 by thbeck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_len(char *string);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len_d;
	unsigned int	len_s;
	unsigned int	pos;
	unsigned int	i;

	len_d = ft_len(dest);
	len_s = ft_len(src);
	pos = 0;
	i = len_d;
	if (size <= len_d)
		return (size + len_s);
	while (src[pos] && i < (size - len_d - 1))
	{
		dest[i] = src[pos];
		i++;
		pos++;
	}
	dest[i] = '\0';
	return (len_d + len_s);
}

unsigned int	ft_len(char *string)
{
	unsigned int	len;

	len = 0;
	while (string[len])
		len++;
	return (len);
}

/*#include <stdio.h>

int main(void)
{	
	unsigned int size = 16;
	char dest[16] = "This is ";
	char src[] = "a potentially long string";	
	printf("%i", ft_strlcat(dest, src, size));
	printf("%s", dest);
}*/
