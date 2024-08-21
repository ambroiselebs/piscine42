/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberenge <marvin@42.fr>                    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-21 20:38:57 by aberenge          #+#    #+#             */
/*   Updated: 2024-08-21 20:38:57 by aberenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	test_func(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == 'z')
			return (1);
		i++;
	}
	return (0);
}

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (i < length)
	{
		if (f(tab[i]) != 0)
			count++;
		i++;
	}
	return (count);
}

/* int	main(void)
{
	char	*tab[] = {"test", "testaz", "test"};
	printf("%d", ft_count_if(tab, 3, test_func));
	return (0);
} */
