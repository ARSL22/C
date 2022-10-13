/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 17:06:37 by anpereir          #+#    #+#             */
/*   Updated: 2022/10/12 17:19:18 by anpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	ft_fibonacci(int index)
{
	int	i;

	i = index;
	if (index < 0)
		return (-1);
	if (i > i * index)
		return (0);
	else if (index > 1)
		return (i * ft_fibonacci(index));
	else if (index > 0)
		return (0);
	else 
		return (i);
}

int	main(void)
{
	int	f;
	
	f = 7;
	printf("%d", ft_fibonacci(f));
}
