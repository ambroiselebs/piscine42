/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_str.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberenge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 12:07:38 by aberenge          #+#    #+#             */
/*   Updated: 2024/08/20 12:49:21 by aberenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_STR_H
#define FT_STOCK_STR_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct s_stock_str
{
	int size;
	char *str;
	char *copy;
} t_stock_str;

#endif
