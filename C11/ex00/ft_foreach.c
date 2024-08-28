/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberenge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 17:36:40 by aberenge          #+#    #+#             */
/*   Updated: 2024/08/27 13:20:24 by aberenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <unistd.h>

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
} */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

/* int	main(void)
{
	int	tab[5] = {1, 2, 3, 4, 5};
	ft_foreach(tab, 5, &ft_putnbr);
	return (0);
} */
