/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberenge <marvin@42.fr>                    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-09 13:59:46 by aberenge          #+#    #+#             */
/*   Updated: 2024-08-09 13:59:46 by aberenge         ###   ########.fr       */
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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	d;
	unsigned int	c;

	d = ft_strlen(dest);
	c = 0;
	while (src[c] && c < nb)
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
    char destination[50] = "Hello";
    char source[] = "World";

    ft_strncat(destination, source, 10);

    printf("Chaîne destination: '%s'\n", destination);

    return 0;
}*/
