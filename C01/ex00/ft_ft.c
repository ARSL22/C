/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 10:56:43 by anpereir          #+#    #+#             */
/*   Updated: 2022/09/28 14:28:58 by anpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}
/*
int	main(void)
{
	int	*nbr;
	int	number;

	nbr = &number;
	ft_ft(nbr);
	printf("%d", number);
	return (0);
}*/
/*
void	ft_ft(int *nbr)
{

int	a;

a = 42;

*nbr = a;
}

int	main(void)
{
	int	b;
	b = 52;
	
	ft_ft(&a);
	print("%d", b);
	return (0);
	
}*/
