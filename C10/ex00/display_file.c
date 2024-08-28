/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberenge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 17:24:58 by aberenge          #+#    #+#             */
/*   Updated: 2024/08/21 17:42:43 by aberenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	main(int argc, char **argv)
{
	ssize_t	readed;
	char	buffer[1024];
	int		file;

	if (argc != 2)
	{
		if (argc < 2)
			ft_putstr("File name missing.\n");
		if (argc > 2)
			ft_putstr("Too many arguments.\n");
		return (0);
	}
	file = open(argv[1], O_RDONLY);
	if (file == -1)
	{
		ft_putstr("Cannot read file.\n");
		return (0);
	}
	readed = read(file, buffer, 1024);
	while (readed > 0)
	{
		write(1, buffer, readed);
		readed = read(file, buffer, 1024);
	}
	close(file);
	return (0);
}
