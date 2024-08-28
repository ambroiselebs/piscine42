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

int	main(int argc, char **argv)
{
	char	data[1024];
	ssize_t	bytes_read;
	int		file;

	file = open(argv[1], O_RDONLY);
	bytes_read = read(file, data, 1024);
	while (bytes_read > 0)
	{
		write(STDOUT_FILENO, data, bytes_read);
		bytes_read--;
	}
	close(file);
	return (0);
}
