/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbeck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 19:07:39 by thbeck            #+#    #+#             */
/*   Updated: 2024/08/21 21:57:39 by thbeck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (s1[i] - s2[i]);
	}
	return (0);
}

/*#include <stdio.h>

int	main(void)
{
	char lhs[] = " ";
    	char rhs[] = " ";
	int result;

    	result = ft_strncmp(lhs,rhs,3);
    	printf("%i", result);

    	result = ft_strncmp(lhs,rhs,4);
   	 printf("%i", result);

    return 0;
}*/
