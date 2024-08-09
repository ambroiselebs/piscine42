/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberenge <marvin@42.fr>                    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-09 16:21:31 by aberenge          #+#    #+#             */
/*   Updated: 2024-08-09 16:21:31 by aberenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	find;
	int	to_find_len;

	i = 0;
	to_find_len = ft_strlen(to_find);
	while (str[i])
	{
		find = 0;
		while (str[i] == to_find[find])
		{
			if (find == to_find_len)
				return (to_find);
			else
			{
				find++;
				i++;
			}
		}
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char *res = ft_strstr("Bonjour monde", "monde");
	printf("%s", res);

	return (0);
}*/
