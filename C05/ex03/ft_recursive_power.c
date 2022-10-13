/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 16:54:19 by anpereir          #+#    #+#             */
/*   Updated: 2022/10/12 17:01:09 by anpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	i;

	i = nb;
	if (power == 0)
		return (1);
	if (i > i * nb)
		return (0);
	else if (power > 1)
		return (i * ft_recursive_power(i, power -1));
	else if (power < 0)
		return (0);
	else
		return (i);
}

int	main(void)
{
	int	num;
	int	x;

	num = 5;
	x = 9;
	printf("%d", ft_recursive_power(num, x));
}
