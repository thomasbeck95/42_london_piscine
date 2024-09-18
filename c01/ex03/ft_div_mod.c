/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbeck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 10:23:18 by thbeck            #+#    #+#             */
/*   Updated: 2024/08/12 15:42:13 by thbeck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int main(void)
{
	int di = 6;
	int mo = 6;
	int *div = &di;
	int *mod = &mo;
	ft_div_mod(18, 5, div, mod);
	printf("%i.", di);
	printf("%i", mo);
}*/
