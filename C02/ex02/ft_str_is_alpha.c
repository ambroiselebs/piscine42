/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberenge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 12:36:02 by aberenge          #+#    #+#             */
/*   Updated: 2024/08/08 13:00:53 by aberenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int		i;
	char	j;

	i = 0;
	while (str[i])
	{
		j = str[i];
		if (!((j >= 'a' && j <= 'z') || (j >= 'A' && j <= 'Z')))
			return (0);
		i++;
	}
	return (1);
}
/*
int main(void)
{
	int res = ft_str_is_alpha("Hellworld");
	printf("%d", res);

	return 0;
}*/