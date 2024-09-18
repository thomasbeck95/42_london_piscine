/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbeck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 18:38:22 by thbeck            #+#    #+#             */
/*   Updated: 2024/08/21 09:23:37 by thbeck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		if (s1[i] == s2[i])
			i++;
		else
		{
			i = s1[i] - s2[i];
			return (i);
		}
	}
	if (s1[i] != s2[i])
	{
		i = s1[i] - s2[i];
		return (i);
	}
	return (0);
}

/*
#include <stdio.h>

int	main(void)
{
        char str1[] = "abcd", str2[] = "abCd", str3[] = "abcd     ";
        int result;

        // comparing strings str1 and str2
        result = ft_strcmp(str1, str2);
        printf("strcmp(str1, str2) = %d\n", result);

        // comparing strings str1 and str3
        result = ft_strcmp(str1, str3);
        printf("strcmp(str1, str3) = %d\n", result);

        return 0;

}*/
