/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberenge <marvin@42.fr>                    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-10 09:38:48 by aberenge          #+#    #+#             */
/*   Updated: 2024-08-10 09:38:48 by aberenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	parse_str(char *str, char *new)
{
	int	i;
	int	j;
	int	res;

	i = 0;
	j = 0;
	res = 0;
	while (str[i])
	{
		if (str[i] == '+')
			res++;
		if (str[i] == '-')
			res--;
		if (str[i] >= '0' && str[i] <= '9')
		{
			new[j] = str[i];
			j++;
		}
		i++;
	}
	return (res);
}

int	ft_atoi(char *str)
{
	char	new[11];
	int		i;
	int		sign;
	int		res;

	sign = parse_str(str, new);
	i = 0;
	res = 0;
	while (new[i])
	{
		res = res * 10 + (new[i] - '0');
		i++;
	}
	if (sign < 0)
		res = -res;
	return (res);
}

/* int main(void)
{
	int res = ft_atoi("-1234ab567");
	printf("%d", res);

	return (0);
} */
