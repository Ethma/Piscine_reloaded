/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabessir <mabessir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 16:05:30 by mabessir          #+#    #+#             */
/*   Updated: 2017/11/08 10:06:43 by mabessir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;
	int res;

	i = 1;
	res = 1;
	if (nb == 1 || nb == 0)
		return (1);
	if (nb > 12 || nb < 0)
		return (0);
	while (i <= nb)
	{
		res = i * res;
		i++;
	}
	return (res);
}
