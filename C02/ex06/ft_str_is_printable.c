/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 16:28:58 by anpereir          #+#    #+#             */
/*   Updated: 2022/10/04 16:48:57 by anpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] > 32 && str[i] <= 127)
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int	main (void)
{	
	printf("%d\n", ft_str_is_printable("16s4d5sf4a4g//<>~"));
	printf("%d\n", ft_str_is_printable(""));
	printf("%d\n", ft_str_is_printable("AHAJH%%€GSJGH\\"));
}*/
