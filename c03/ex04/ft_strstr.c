/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbeck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 12:04:51 by thbeck            #+#    #+#             */
/*   Updated: 2024/08/21 21:15:01 by thbeck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (*to_find == 0)
	{
		return (str);
	}
	if (*str == 0 && *to_find)
		return (NULL);
	while (to_find[j])
		j++;
	while (*str)
	{
		while (str[i] == to_find[i] && j > 0)
		{
			i++;
			j--;
			if (j == 0)
				return (str);
		}
		str++;
	}
	return (NULL);
}

/*int	main(void)
{
   char *str = "";
   char *substr = "abc";
   char *ret;
   
   // ft_strstr(main_string, substring)
   ret = ft_strstr(str, substr);
   
   // Display the output
   printf("The substring is: %s\n", ret);
   
   return(0);	
}*/
