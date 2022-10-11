/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 11:14:16 by anpereir          #+#    #+#             */
/*   Updated: 2022/10/10 11:54:08 by anpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	ft_strlen(char*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int	i;
	int	x;
	int	dlen;
	int	slen;

	i = 0;
	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	dlen = x;
	slen = ft_strlen(src);
	if (size == 0 || size <= dlen)
		return (slen + size);
	while (src[i] != '\0' && i < size - dlen -1)
	{
		dest[x] = src[i];
		x++;
		i++;
	}
	dest[x] = '\0';
	return (dlen + slen);
}
/*
int	main()
{

	char	src[] = "Born to code";
	char	dest[] = "2209";

	printf("%d\n", ft_strlcat(dest, src, 17));
	printf("%s\n", dest);
}*/
