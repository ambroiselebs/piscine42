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

/*int	compare(int a, int b) {
	return (a - b);
}*/

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	ascending;
	int	descending;

	if (length <= 1)
		return (1);
	i = 0;
	ascending = 1;
	descending = 1;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) < 0)
			descending = 0;
		else if (f(tab[i], tab[i + 1]) > 0)
			ascending = 0;
		i++;
	}
	if (ascending || descending)
		return (1);
	return (0);
}

/*int	main(void)
{
	int	tab_croissant[5] = {1, 2, 3, 4, 5};
	int	tab_decroissant[5] = {5, 4, 3, 2, 1};
	int	tab_pastrie[5] = {5, 4, 12, 2, 1};
	printf("%d\n", ft_is_sort(tab_croissant, 5, compare));
	printf("%d\n", ft_is_sort(tab_decroissant, 5, compare));
	printf("%d\n", ft_is_sort(tab_pastrie, 5, compare));
	return (0);
}*/
