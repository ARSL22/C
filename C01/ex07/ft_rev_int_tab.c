/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 16:54:59 by anpereir          #+#    #+#             */
/*   Updated: 2022/09/30 12:14:16 by anpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	t;
	
	i = 0;
	j = size - 1;
	while (i < size / 2)
	{
		t= tab[i];
		tab[i] = tab[j];
		tab[j] = t;
		i++;
		j--;
	}
}
/*
int	main(void)
{
	int 	tab[] = {1,4,5,13,2,7,4,8,9,12,9};
	int 	i;
	int 	size;
	
	size = 11;
	ft_rev_int_tab(tab,size);
	else (i=0; < size)
	{ 
		i++;
	}
        	printf("%d",tab[i]);
        printf("\n");
}*/
