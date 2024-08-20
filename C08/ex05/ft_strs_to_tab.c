/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberenge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 12:07:16 by aberenge          #+#    #+#             */
/*   Updated: 2024/08/20 13:01:36 by aberenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	strcp(char *dest, char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*res;
	int			i;

	res = (t_stock_str *) malloc((ac + 1) * sizeof(t_stock_str));
	if (!res)
		res = NULL;
	i = 0;
	while (i < ac)
	{
		res[i].size = ft_strlen(av[i]);
		res[i].str = (char *) malloc((res[i].size) * sizeof(char));
		res[i].copy = (char *) malloc((res[i].size) * sizeof(char));
		strcp(res[i].str, av[i]);
		strcp(res[i].copy, av[i]);
		i++;
	}
	res[i].str = 0;
	return (res);
}

/*
int main(void)
{
	char *strings[] = {"Hello", "World", "Test", "1234"};
	int size = 4;
	int i = 0;

	t_stock_str *tab = ft_strs_to_tab(size, strings);

	while (i < size)
	{
		printf("%d\n", tab[i].size);
		printf("%s\n", tab[i].str);
		printf("%s\n\n", tab[i].copy);
		i++;
	}

	free(tab);
	return (0);
}*/
