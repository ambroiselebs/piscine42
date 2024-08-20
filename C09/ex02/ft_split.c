/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberenge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 09:00:50 by aberenge          #+#    #+#             */
/*   Updated: 2024/08/20 11:01:44 by aberenge         ###   ########.fr       */
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

void	ft_split(char *str, char *charset)
{
	char	**res;
	int		str_i;
	int		charset_i;
	int		to_copy;
	int		last_found;

	str_i = 0;
	to_copy = 0;
	last_found = 0;
	while (str[str_i])
	{
		charset_i = 0;
		while (str[str_i] == charset[charset_i] && charset[charset_i])
		{
			str_i++;
			charset_i++;
		}

		if (charset[charset_i] == '\0')
		{
			to_copy = str_i - ft_strlen(charset);
			while (to_copy >= last_found)
			{
				printf("%c\n", str[to_copy]);
				to_copy--;
			}
			last_found = str_i;
		}
		str_i++;
	}
}

int	main(void)
{
	ft_split("test 0n dwadad 0n", "0n");
	return (0);
}
