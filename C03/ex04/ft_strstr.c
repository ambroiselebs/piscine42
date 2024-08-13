/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberenge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 16:21:31 by aberenge          #+#    #+#             */
/*   Updated: 2024/08/13 12:29:55 by aberenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
//#define NULL ((void*)0)

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (!to_find[0])
		return (0);
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (to_find[j] && j > 0)
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char *res = ft_strstr("Bonjour je m'appelle", "je");
	char *vrai = strstr("Bonjour je m'appelle", "je");
	printf("Custom : %s\n", res);
	printf("Vrai : %s\n", vrai);

	return (0);
}*/
