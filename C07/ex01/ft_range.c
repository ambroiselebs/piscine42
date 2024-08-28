/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberenge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 09:35:43 by aberenge          #+#    #+#             */
/*   Updated: 2024/08/19 13:29:34 by aberenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*res;
	int	i;
	int	j;

	if (min >= max)
		return (0);
	res = (int *) malloc((max - min) * sizeof(int));
	i = min;
	j = 0;
	while (i < max)
	{
		res[j] = i;
		i++;
		j++;
	}
	return (res);
}
/*
int	main(void)
{
	int	i = 0;
	int *res = ft_range(0, 128);
	while (i <= 128)
	{
		printf("%i, ", res[i]);
		i++;
	}
	return (0);
}*/
