/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberenge <marvin@42.fr>                    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-18 12:12:18 by aberenge          #+#    #+#             */
/*   Updated: 2024-08-18 12:12:18 by aberenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

/*
int	main(void)
{
	char mot1[] = "pomme";
	char mot2[] = "banane";
	printf("%d\n", ft_strncmp(mot1, mot2, 3));
	printf("%d\n", ft_strncmp(mot2, mot1, 3));
	printf("%d", ft_strncmp(mot1, mot1, 3));
	return (0);
}*/
