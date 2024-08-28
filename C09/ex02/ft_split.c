/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberenge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 12:25:16 by aberenge          #+#    #+#             */
/*   Updated: 2024/08/22 16:17:03 by aberenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	is_sep(char c, char *charset)
{
	while (*charset)
		if (c == *charset++)
			return (1);
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	count;

	count = 0;
	while (*str)
	{
		while (*str && is_sep(*str, charset))
			str++;
		if (*str)
			count++;
		while (*str && !is_sep(*str, charset))
			str++;
	}
	return (count);
}

char	*malloc_word(char *str, char *charset)
{
	int		len;
	char	*word;

	len = 0;
	while (str[len] && !is_sep(str[len], charset))
		len++;
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	word[len] = '\0';
	while (len--)
		word[len] = str[len];
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		words;
	char	**tab;

	i = 0;
	words = count_words(str, charset);
	tab = (char **)malloc(sizeof(char *) * (words + 1));
	if (!tab)
		return (NULL);
	while (*str)
	{
		while (*str && is_sep(*str, charset))
			str++;
		if (*str)
		{
			tab[i++] = malloc_word(str, charset);
			while (*str && !is_sep(*str, charset))
				str++;
		}
	}
	tab[i] = 0;
	return (tab);
}
/*
int	main(void) {
	char **res = ft_split("Hello,,World!This is a test.", ", !.");
	int	i = 0;
	while (res[i])
		printf("%s\n", res[i++]);
	i = 0;
	while (res[i])
		free(res[i++]);
	free(res);
	return (0);
}*/
