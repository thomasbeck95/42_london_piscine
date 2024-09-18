/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbeck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 12:33:28 by thbeck            #+#    #+#             */
/*   Updated: 2024/08/19 11:26:50 by thbeck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_len(char *src)
{
	unsigned int	j;

	j = 0;
	while (src[j])
	{
		j++;
	}
	return (j);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len_src;

	i = 0;
	len_src = ft_len(src);
	if ((size - 1) > 0)
	{
		while (src[i] && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		while (dest[i])
		{
			dest[i] = '\0';
			i++;
		}
	}
	return (len_src);
}

/*#include <stdio.h>

int	main(void)
{
	char	src0[] = "";
	char	dest0[5] = "1234";	
	printf("%i\n%s\n", ft_strlcpy(dest0, src0, 5), dest0);
	char	src1[] = "abcde";
	char	dest1[4] = "123";	
	printf("%i\n%s\n", ft_strlcpy(dest1, src1, 4), dest1);
	char	src2[] = "abc";
	char	dest2[7] = "123456";	
	printf("%i\n%s\n", ft_strlcpy(dest2, src2, 7), dest2);
}*/
