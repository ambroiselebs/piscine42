/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberenge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 12:25:16 by aberenge          #+#    #+#             */
/*   Updated: 2024/08/21 13:10:29 by aberenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	is_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}
/**
Fonction pour calculer la taille requise pour le malloc
(toutes str - (charset * x))
*/

int	ft_len(char *str, char *charset)
{
	int	i;
	int	len;

	len = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] && !is_charset(str[i], charset))
			len++;
		while (str[i] && !is_charset(str[i], charset))
			i++;
		i++;
	}
	return (len);
}
/**
Fonction pour calculer la taille d'une chaine de caractere
hors charset (seulement une avant arriver charset)
*/

int	ft_word_len(char *str, char *charset)
{
	int	len;
	int	i;

	len = 0;
	i = 0;
	while (str[i] && !is_charset(str[i], charset))
	{
		len++;
		i++;
	}
	return (len);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	len = 0;
	while (src[len])
		len++;
	if (size == 0)
		return (len);
	i = 0;
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}

char	**ft_split(char *str, char *charset)
{
	char	**strs;
	int		len;
	int		i;
	int		j;

	strs = (char **)malloc((ft_len(str, charset) + 1) * sizeof(char));
	if (!strs)
		return (0);
	i = 0;
	j = 0;
	while (str[i])
	{
		while (is_charset(str[i], charset))
			++i;
		len = ft_word_len(str + i, charset);
		strs[j] = (char *)malloc((len + 1) * sizeof(char));
		if (!strs[j])
			return (0);
		ft_strlcpy(strs[j++], &str[i], len + 1);
		i += len;
	}
	strs[j] = 0;
	return (strs);
}

/* int	main(void)
{
	char	**res = ft_split("c'est le plus beau SHREK il est parfait", "SHREK");
	int	i = 0;
	while (res[i])
	{
		printf("%s\n", res[i]);
		i++;
	}
	free(res);
	return (0);
} */
