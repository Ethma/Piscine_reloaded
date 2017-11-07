/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabessir <mabessir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 17:59:46 by mabessir          #+#    #+#             */
/*   Updated: 2017/11/07 18:30:59 by mabessir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_display_file(int fd)
{
	char *buffer;

	while (read(fd, &buffer, 1) != 0)
		write(1, &buffer, 1);
}

int		main(int ac, char **av)
{
	if (ac < 2)
		ft_putstr("File name missing.\n");
	if (ac > 3)
		ft_putstr("Too many arguments.\n");
	fd = open(av[1], O_RDONLY);
	ft_display_file(fd);
	close(fd);
	return (0);
}
