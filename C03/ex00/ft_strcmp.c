/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 14:46:51 by anpereir          #+#    #+#             */
/*   Updated: 2022/10/06 16:53:15 by anpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while( (*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	if( *s1 == *s2)
	{
		return 0; // strings sao identicas
	}

	else
	{
	return (*s1 - *s2);
	}	
}
int	main(void)
{
	printf("%d", ft_strcmp("Hello", "Rita"));
	printf("%d\n", ft_strcmp("Hello", "me"));
}
