/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 12:05:35 by anpereir          #+#    #+#             */
/*   Updated: 2022/10/11 12:12:19 by anpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write (1, &*str, 1);
		str++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 1)
		ft_putstr(argv[0]);
	write (1, "\n", 1);
	return (0);
}
