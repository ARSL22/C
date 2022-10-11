/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:29:02 by anpereir          #+#    #+#             */
/*   Updated: 2022/10/04 14:29:33 by anpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	x;

	x = 0;
	if (str[x] == '\0')
		return (1);
	while (str[x] != '\0')
	{
		if ((str[x] >= 'A' && str[x] <= 'Z')
			|| (str[x] >= 'a' && str[x] <= 'z'))
				x++;
		else
			return (0);
	}
	return (1);
}
/*
int	ft_str_is_alpha(char *str)
{
	int	x;
	
	x = 0;
	while(str[x] != '\0')
	{
	if(str[x] == '\0')
	{
		return (1);
	}
	if((str[x] >= 'a' && str[x] <= 'z')
	|| ( str[x] >= 'A' && str[x] <= 'Z'))
	x++;
	else 	
	return (0);
	}
	return (1);
}
int	main(void)
{	
	printf("%d\n", ft_str_is_alpha("abcdefg"));
	printf("%d\n", ft_str_is_alpha("1234"));
	printf("%d\n", ft_str_is_alpha(""));
}*/
