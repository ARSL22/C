/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 10:56:54 by anpereir          #+#    #+#             */
/*   Updated: 2022/10/11 11:19:54 by anpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	s;
	int	x;

	x = 1;
	i = 0;
	s = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str [i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			x *= -1;
		}
		i++;
	}
	while (str[i] && (str[i] >= '0' && str [i] <= '9'))
	{
		s = s * 10 + (str[i] - '0');
		i++;
	}
	return (s * x);
}
/*
int	main(void)
{
	char	*i = " ---+--+01234506789ab567";

	printf("%d", ft_atoi(i));
}*/	
