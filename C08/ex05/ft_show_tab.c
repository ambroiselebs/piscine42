/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberenge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 12:44:21 by aberenge          #+#    #+#             */
/*   Updated: 2024/08/20 16:19:17 by aberenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void	print_number(char *str, int size)
{
	while (size > 0)
	{
		size--;
		write(1, &str[size], 1);
	}
}

void	ft_putnbr(int nb)
{
	char	final[12];
	int		i;

	if (nb == 0)
		write(1, "0", 1);
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	i = 0;
	while (nb > 0)
	{
		final[i] = (nb % 10) + '0';
		nb = nb / 10;
		i++;
	}
	print_number(final, i);
}

void	ft_putchar(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_putchar(par[i].str);
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		ft_putchar(par[i].copy);
		write(1, "\n", 1);
		i++;
	}
}
/*
int	main(void)
{
	char *strings[] = {"Hello", "World", "Test", "1234"};
	int size = 4;

	t_stock_str *tab = ft_strs_to_tab(size, strings);
	ft_show_tab(tab);

	return (0);
}*/
