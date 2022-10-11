/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 10:01:29 by anpereir          #+#    #+#             */
/*   Updated: 2022/10/07 10:22:39 by anpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

int	main(void)
{
	printf("%d\n", ft_strncmp("Hello", "Rita", 9));
	printf("%d\n", ft_strncmp("Hello", "me", 7));
}
