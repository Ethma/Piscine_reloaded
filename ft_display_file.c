/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabessir <mabessir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 17:59:46 by mabessir          #+#    #+#             */
/*   Updated: 2017/11/08 11:16:58 by mabessir         ###   ########.fr       */
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
	int		re;
	int		buffer;
	char	buf[11];

	buffer = 10;
	re = read(fd, buf, buffer);
	while (re)
	{
		buf[re] = '\0';
		ft_putstr(buf);
		re = read(fd, buf, buffer);
	}
}

int		main(int ac, char **av)
{
	int fd;

	if (ac < 2)
	{
		ft_putstr("File name missing.\n");
		return (0);
	}
	if (ac > 2)
	{
		ft_putstr("Too many arguments.\n");
		return (0);
	}
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
		return (1);
	ft_display_file(fd);
	if (close(fd) == -1)
		return (1);
	return (0);
}
