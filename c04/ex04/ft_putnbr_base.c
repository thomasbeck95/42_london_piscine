/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbeck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 10:24:31 by thbeck            #+#    #+#             */
/*   Updated: 2024/08/29 14:40:36 by thbeck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str);

int	ft_check(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (ft_strlen(base) < 2)
		return (1);
	while (base[i])
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (1);
		while (base[j])
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_strlen(char *str)
{
	long	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	len;
	char	output;
	long	l_nbr;

	l_nbr = (long) nbr;
	if (ft_check(base) == 1)
		return ;
	len = ft_strlen(base);
	if (l_nbr < 0)
	{
		write(1, "-", 1);
		l_nbr = -1 * l_nbr;
		ft_putnbr_base(l_nbr, base);
	}
	else if (l_nbr >= len)
	{
		ft_putnbr_base((l_nbr / len), base);
		ft_putnbr_base((l_nbr % len), base);
	}
	else
	{
		output = base[l_nbr];
		write(1, &output, 1);
	}
}

int	main(void)
{
	ft_putnbr_base(25, "0123456789abcdef");
	write(1, "\n", 1);
	ft_putnbr_base(8, "01");
	write(1, "\n", 1);
	ft_putnbr_base(145062, "mrdoc");
	write(1, "\n", 1);
	ft_putnbr_base(-42, "aaaaa");
	write(1, "\n", 1);
	ft_putnbr_base(-42, "");
	write(1, "\n", 1);
	ft_putnbr_base(-42, "1");
	write(1, "\n", 1);
}
