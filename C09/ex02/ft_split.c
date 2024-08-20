/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberenge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 09:00:50 by aberenge          #+#    #+#             */
/*   Updated: 2024/08/20 16:00:06 by aberenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;

	while (str[i])
		i++;
	return (i);
}

char	**ft_split(char *str, char *charset)
{
	char	**res;
	int	str_i;
	int	charset_i;
	int	res_i;
	int	res_str_i;
	int	prev_i;

	str_i = 0;
	res_i = 0;
	res_str_i = 0;
	prev_i = 0;
	res = (char **) malloc((ft_strlen(str)) + 1 * sizeof(char));
	while (str[str_i])
	{
		charset_i = 0;
		while (str[str_i] == charset[charset_i])
		{
			str_i++;
			charset_i++;
			if (charset[charset_i] == '\0' && str_i > ft_strlen(charset))
			{
				res_i++;
				res_str_i = 0;
				prev_i = str_i;
				printf("\n");
			}
		}
		res[res_i] = (char *) malloc((str_i - prev_i) * sizeof(char));
		res[res_i][res_str_i] = str[str_i];
		res[res_i][res_str_i + 1] = '\0';
		printf("%c", res[res_i][res_str_i]);
		res_str_i++;
		str_i++;
	}
	return (res);
}
int	main(void)
{
	char	**result;
	result = ft_split("Le plus beau SHREK il est parfait", "SHREK");
	int	i = 0;
	while (result[i] != 0)
	{
		printf("%s", result[i]);
		i++;
	}
	free(result);
	return (0);
}
