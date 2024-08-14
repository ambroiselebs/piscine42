/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberenge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 09:38:48 by aberenge          #+#    #+#             */
/*   Updated: 2024/08/14 09:29:49 by aberenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	check_alphabet(char c)
{
	if ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

int	choose_sign(char *str)
{
	int	i;
	int	opp;

	i = 0;
	opp = 1;
	while (str[i] && !(str[i] >= '0' && str[i] <= '9'))
	{
		if (str[i] == '-')
			opp *= -1;
		i++;
	}
	return (opp);
}

void	parse_int(char *str, char *res)
{
	int	i;
	int	j;
	int	found;

	i = 0;
	j = 0;
	found = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			res[j] = str[i];
			j++;
			found = 1;
		}
		if (check_alphabet(str[i]))
			break ;
		if (found && str[i] == ' ')
			break ;
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
	return (nb * opp);
}
/*
int main(void)
{
	int res = ft_atoi("+abc123");
	printf("%d", res);

	return (0);
}*/
