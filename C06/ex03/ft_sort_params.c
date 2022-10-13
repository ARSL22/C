/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 15:13:19 by anpereir          #+#    #+#             */
/*   Updated: 2022/10/11 16:13:20 by anpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write (1, &str[i], 1);
		i++;
	}
}

void	ft_swap(char **a, char **b)
{
	char	*tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int	ft_strcmp(char *s1, char*s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int	main(int argc, char **argv)
{
	int	i;
	int	x;

	i = 1;
	while (i < argc)
	{
		x = 1;
		while (x < argc - i)
		{
			if (ft_strcmp(argv[x], argv[x + 1]) > 0)
			{
				ft_swap(&argv[x], &argv[x + 1]);
			}
			x++;
		}
	i++;
	}
	x = 1;
	while (x < argc)
	{
		ft_putstr(argv[x]);
		write(1, "\n", 1);
		x++;
	}
	return (0);
}
