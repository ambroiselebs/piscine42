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
	int	i;
	int	j;

	i = ft_strlen(dest);
	j = ft_strlen(src);
	while (src[j])
	{
		dest[i] = src[j];
		j--;
		i--;
	}
	return (dest);
}

int main() {
    // Déclaration et initialisation des chaînes
    char destination[50] = "Bonjour, ";  // Chaîne de destination avec suffisamment d'espace
    char source[] = "monde!";            // Chaîne source à concaténer

    // Affichage des chaînes avant la concaténation
    printf("Avant strcat:\n");
    printf("Chaîne destination: '%s'\n", destination);
    printf("Chaîne source: '%s'\n", source);

    // Concaténation de la chaîne source à la chaîne destination
    ft_strcat(destination, source);

    // Affichage des chaînes après la concaténation
    printf("\nAprès strcat:\n");
    printf("Chaîne destination: '%s'\n", destination);

    return 0;
}
