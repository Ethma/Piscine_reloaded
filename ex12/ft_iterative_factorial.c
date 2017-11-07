/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabessir <mabessir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 16:05:30 by mabessir          #+#    #+#             */
/*   Updated: 2017/11/07 18:23:31 by mabessir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;
	int res;

	i = 1;
	res = 1;
	if (nb == 0 || nb == 1)
		return (1);
	if (nb > 12)
		return (0);
	while (i <= nb)
	{
		res = i * res;
		i++;
	}
	return (res);
}

int		main(int ac, char **av)
{
	printf("%d", ft_iterative_factorial(atoi(av[1])));
	return (0);
}
