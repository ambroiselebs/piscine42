/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberenge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 17:44:35 by aberenge          #+#    #+#             */
/*   Updated: 2024/08/27 13:20:20 by aberenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
/*
int	increment(int n)
{
	return (n + 1);
}*/

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*res;

	res = (int *)malloc(length * sizeof(int));
	i = 0;
	while (i < length)
	{
		res[i] = f(tab[i]);
		i++;
	}
	return (res);
}
/* int main()
{
	int tab[] = {1, 2, 3, 4, 5};
	int length = sizeof(tab) / sizeof(tab[0]);
	int *result;
	int i;

	// Apply ft_map with the increment function
	result = ft_map(tab, length, increment);

	// Print the results
	printf("Original array: ");
	for (i = 0; i < length; i++)
		printf("%d ", tab[i]);
	printf("\n");

	printf("Mapped array: ");
	for (i = 0; i < length; i++)
		printf("%d ", result[i]);
	printf("\n");

	// Free the allocated memory
	free(result);

	return (0);
} */
