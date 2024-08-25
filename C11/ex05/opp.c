/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   opp.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberenge <marvin@42.fr>                    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-25 07:44:46 by aberenge          #+#    #+#             */
/*   Updated: 2024-08-25 07:44:46 by aberenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doop.h"

int	add(int a, int b)
{
	return (a + b);
}

int	minus(int a, int b)
{
	return (a - b);
}

int	times(int a, int b)
{
	return (a * b);
}

int	divide(int a, int b)
{
	if (b == 0)
	{
		write(1, "Stop : division by zero", 23);
		return (0);
	}
	return (a / b);
}

int	modulo(int a, int b)
{
	if (b == 0)
	{
		write(1, "Stop : modulo by zero", 21);
		return (0);
	}
	return (a % b);
}
