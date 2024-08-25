/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberenge <marvin@42.fr>                    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-25 08:28:10 by aberenge          #+#    #+#             */
/*   Updated: 2024-08-25 08:28:10 by aberenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doop.h"

void	ft_putnbr(int nb)
{
	char	res[128];
	int		i;

	i = 0;
	if (nb == 0)
	{
		write(1, "0", 1);
		return ;
	}
	while (nb > 0)
	{
		res[i] = nb % 10 + '0';
		nb = nb / 10;
		i++;
	}
	i--;
	while (i >= 0)
	{
		write(1, &res[i], 1);
		i--;
	}
}

int	ft_atoi(char	*str)
{
	int	i;
	int	sign;
	int	nb;

	i = 0;
	sign = 1;
	nb = 0;
	while (str[i] == ' ')
		i++;
	while (str[i] == '-' && str[i] == '+')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	return (nb * sign);
}

int	main(int argc, char **argv)
{
	t_opptab	opps[128];
	int			nba;
	int			nbb;

	if (argc != 4)
		return (1);
	opps[(unsigned char) '+'] = add;
	opps[(unsigned char) '-'] = minus;
	opps[(unsigned char) '*'] = times;
	opps[(unsigned char) '/'] = divide;
	opps[(unsigned char) '%'] = modulo;
	if (opps[(unsigned char) argv[2][0]])
	{
		nba = ft_atoi(&argv[1][0]);
		nbb = ft_atoi(&argv[3][0]);
		ft_putnbr(opps[(unsigned char) argv[2][0]](nba, nbb));
	}
	else
		write(1, "0", 1);
	return (0);
}
