/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberenge <marvin@42.fr>                    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-09 10:56:19 by aberenge          #+#    #+#             */
/*   Updated: 2024-08-09 10:56:19 by aberenge         ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	int	d;
	int	c;

	d = ft_strlen(dest);
	c = 0;
	while (src[c])
	{
		dest[d] = src[c];
		d++;
		c++;
	}
	dest[d] = '\0';
	return (dest);
}
/*
int main() {
    char destination[50] = "Bonjour, ";
    char source[] = "monde!";

    ft_strcat(destination, source);

    printf("Chaîne destination: '%s'\n", destination);

    return 0;
}*/
