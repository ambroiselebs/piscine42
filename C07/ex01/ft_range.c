/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberenge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 09:35:43 by aberenge          #+#    #+#             */
/*   Updated: 2024/08/13 09:54:37 by aberenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#define NULL ((void*)0)

int	*ft_range(int min, int max)
{
	int	*res;
	int	i;
	int	j;

	if (min >= max)
		return (NULL);
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
