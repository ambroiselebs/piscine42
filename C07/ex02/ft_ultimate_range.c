/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberenge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 12:31:17 by aberenge          #+#    #+#             */
/*   Updated: 2024/08/19 09:59:49 by aberenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*res;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	res = (int *) malloc((max - min) * sizeof(int));
	i = 0;
	while (i < (max - min))
	{
		res[i] = min + i;
		i++;
	}
	*range = res;
	return (max - min);
}

int	main(void)
{
	int	*range;
	int	i;
	int	res;

	res = ft_ultimate_range(&range, 0, 128);
	i = 0;
	while (i < res)
	{
		printf("%d ", range[i]);
		i++;
	}
	free(range);
	return (0);
}
