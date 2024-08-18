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
#include <string.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	if (!*to_find)
		return (str);
	while (*str)
	{
		if (*str == *to_find)
		{
			i = 1;
			while (to_find[i] && str[i] == to_find[i])
				i++;
			if (!to_find[i])
				return (str);
		}
		str++;
	}
	return (0);
}
/*
int	main(void)
{
	char s1[] = "fnxibwqixbwqbx rararaspoutine ceipiwbpcwb";
	char s2[] = "raraspoutine";

	printf("%s:%s\n", ft_strstr(s1, s2), strstr(s1, s2));
}
*/
