/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 14:33:55 by anpereir          #+#    #+#             */
/*   Updated: 2022/10/12 15:00:07 by anpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

int	ft_recursive_factorial(int nb)
{
	int	factorial;

	factorial = 1;
	if (nb < 0)
		return (0);
	if (nb > 0)
	{
		factorial = nb * ft_recursive_factorial(nb - 1);
	}
	return (factorial);
}
/*
int	main(void)
{
	int	num;

	num = 9;
	printf("%d", ft_recursive_factorial(num));
}*/
