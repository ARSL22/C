/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 14:20:09 by anpereir          #+#    #+#             */
/*   Updated: 2022/10/12 14:27:36 by anpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	factorial;
	int	i;

	i = 1;
	factorial = 1;
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		factorial *= i;
		i++;
	}
	return (factorial);
}
/*
int	main(void)
{	
	int	r = 5;
	printf("%d", ft_iterative_factorial(r));
}*/
