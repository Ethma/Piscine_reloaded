/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabessir <mabessir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 12:10:03 by mabessir          #+#    #+#             */
/*   Updated: 2017/11/07 16:02:16 by mabessir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
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

void	ft_swap(char **s1, char **s2)
{
	char *c;

	c = *s1;
	*s1 = *s2;
	*s2 = c;
}

int		main(int ac, char **av)
{
	int i;

	i = 1;
	if (ac < 2)
		return (0);
	while (av[i] && av[i + 1] != '\0')
	{
		if (ft_strcmp(av[i], av[i + 1]) > 0)
		{
			ft_swap(&av[i], &av[i + 1]);
			i = 0;
		}
		i++;
	}
	i = 1;
	while (av[i])
	{
		ft_putstr(av[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
