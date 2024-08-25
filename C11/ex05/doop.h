/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doop.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberenge <marvin@42.fr>                    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-25 07:40:16 by aberenge          #+#    #+#             */
/*   Updated: 2024-08-25 07:40:16 by aberenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOOP_H
# define DOOP_H

# include <unistd.h>
# include <stdio.h>

typedef int	(*t_opptab)(int, int);

int	add(int a, int b);
int	minus(int a, int b);
int	times(int a, int b);
int	divide(int a, int b);
int	modulo(int a, int b);

#endif
