/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbeck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 18:19:27 by thbeck            #+#    #+#             */
/*   Updated: 2024/08/28 18:33:06 by thbeck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen_plus(char *src)
{
	int	i;

	i = 0;
	while (src[i])
		i++;
	return (i + 1);
}

char	*ft_strdup(char *src)
{
	int		n;
	int		i;
	char	*dest;

	i = 0;
	n = ft_strlen_plus(src);
	dest = (char *)malloc(n * (sizeof(char)));
	if (dest == NULL)
		return (NULL);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char *str;
	str = "";
	printf("%s", ft_strdup(str));
}
*/
