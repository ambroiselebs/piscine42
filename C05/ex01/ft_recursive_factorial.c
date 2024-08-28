/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial,c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberenge <marvin@42.fr>                    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-10 12:24:17 by aberenge          #+#    #+#             */
/*   Updated: 2024-08-10 12:24:17 by aberenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else if (nb == 1)
		return (nb);
	return (nb * ft_recursive_factorial(nb - 1));
}

/* int main(void)
{
	int res = ft_recursive_factorial(5);
	printf("%d", res);

	return (0);
} */
