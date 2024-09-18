/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbeck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 11:33:58 by thbeck            #+#    #+#             */
/*   Updated: 2024/08/28 18:36:26 by thbeck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strslen(char **strs, int size)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (j < size)
	{
		while (strs[j][k])
		{
			i++;
			k++;
		}
		j++;
		k = 0;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		len;
	int		i;

	i = 0;
	if (size == 0)
	{
		dest = (char *)malloc(sizeof(char));
		*dest = '\0';
		return (dest);
	}
	len = (ft_strslen(strs, size)) + (ft_strlen(sep) * (size - 1));
	dest = (char *) malloc((len + 1) * sizeof (char));
	dest[0] = 0;
	while (i < size)
	{
		if (i != 0)
		{
			ft_strcat(dest, sep);
		}
		ft_strcat(dest, strs[i]);
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	char*	strs[] = {"abc", "cde", "efg"};
	char*	dest = ft_strjoin(3, strs, " ");
	printf("%s",dest);
	free(dest);
}
*/
