/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberenge <marvin@42.fr>                    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-09 16:33:33 by aberenge          #+#    #+#             */
/*   Updated: 2024-08-09 16:33:33 by aberenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	d;
	unsigned int	c;
	unsigned int	src_len;

	d = ft_strlen(dest);
	src_len = ft_strlen(src);
	c = 0;
	if (size <= src_len)
		return (src_len +  size);
	while (src[c])
	{
		dest[d] = src[c];
		d++;
		c++;
	}
	dest[d] = '\0';
	return (d - src_len);
}
