/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberenge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 17:43:38 by aberenge          #+#    #+#             */
/*   Updated: 2024/08/08 18:46:25 by aberenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	check_char(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	if (c >= 'a' && c <= 'z')
		return (-1);
	return (0);
}

int	check_num(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	if (check_char(str[0]) != 0)
		str[0] = str[0] - 32;
	i = 1;
	while (str[i])
	{
		if (check_char(str[i]) == 1)
			str[i] = str[i] + 32;
		i++;
	}
	i = 1;
	while (str[i])
	{
		if ((!check_char(str[i - 1]) && !check_num(str[i - 1]))
			&& check_char(str[i]) != 0)
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
/*
int main(void)
{
	char txt[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	ft_strcapitalize(txt);
	printf("%s", txt);

	return (0);
}
*/
