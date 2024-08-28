/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberenge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 19:51:23 by aberenge          #+#    #+#             */
/*   Updated: 2024/08/09 08:17:50 by aberenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	return (s1[i] - s2[i]);
}
/*
int	main(void)
{
	char mot1[] = "pomme";
	char mot2[] = "banane";

	printf("%d\n", ft_strcmp(mot1, mot2));
	printf("%d\n", ft_strcmp(mot2, mot1));
	printf("%d", ft_strcmp(mot1, mot1));

	return (0);
}*/
