/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 10:48:17 by anpereir          #+#    #+#             */
/*   Updated: 2022/10/10 11:12:57 by anpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

char	*ft_strstr(char*str, char*to_find)
{
	int	i;
	int	x;

	i = 0;
	if (*to_find == '\0')
		return (str);
	while (str[i] != '\0')
	{
		x = 0;
		while (str[i + x] == to_find [x])
		{
			x++;
		}
		i++;
	}
	return (str);
}
/*
int 	main(void)
{
	char	str[]="224ever";
	char	to_find[]="Rita";

	printf("%s", ft_strstr(str, to_find));
}*/
