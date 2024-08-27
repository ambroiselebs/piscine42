/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberenge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 20:47:01 by aberenge          #+#    #+#             */
/*   Updated: 2024/08/27 16:51:59 by aberenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/* int	croissant(int a, int b)
{
	return (a - b);
}
int	decroissant(int a, int b)
{
	return (b - a);
} */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;

	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) < 0)
			return (0);
		i++;
	}
	return (1);
}

/* int	main(void)
{
	int	tab[] = {1, 2, 12, 4, 5};
	printf("%d", ft_is_sort(tab, 5, decroissant));
	return (0);
} */
