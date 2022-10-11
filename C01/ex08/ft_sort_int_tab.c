/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 11:50:24 by anpereir          #+#    #+#             */
/*   Updated: 2022/09/30 11:50:28 by anpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	d;

	i = 0;
	while (i < size)
	{
		d = 0;
		while (d < size - i - 1)
		{
			if (tab[d] > tab[d + 1])
				swap(&tab[d], &tab[d +1]);
			d++;
		}
		i++;
	}
}
