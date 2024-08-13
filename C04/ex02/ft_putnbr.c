/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberenge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 16:56:18 by aberenge          #+#    #+#             */
/*   Updated: 2024/08/13 16:27:26 by aberenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
/*
int	main(void)
{
	ft_putnbr(-42);

	return (0);
}*/
