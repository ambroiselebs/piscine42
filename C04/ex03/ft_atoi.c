/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberenge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 09:38:48 by aberenge          #+#    #+#             */
/*   Updated: 2024/08/13 17:30:25 by aberenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	choose_sign(char *str)
{
	int	i;
	int	opp;

	i = 0;
	opp = 0;
	while (str[i] && !(str[i] >= '0' && str[i] <= '9'))
	{
		if (str[i] == '-')
			opp--;
		if (str[i] == '+')
			opp++;
		i++;
	}
	return (opp);
}

void	parse_int(char *str, char *res)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			res[j] = str[i];
			j++;
		}
		i++;
	}
	res[j] = '\0';
}

int	ft_atoi(char *str)
{
	char	new[128];
	int		opp;
	int		nb;
	int		i;

	parse_int(str, new);
	opp = choose_sign(str);
	i = 0;
	nb = 0;
	while (new[i])
	{
		nb = nb * 10 + (new[i] - '0');
		i++;
	}
	if (opp < 0)
		nb = -nb;
	return (nb);
}
/*
int main(void)
{
	int res = ft_atoi("caca12-///6du28");
	printf("%d", res);

	return (0);
}*/
