/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 12:42:41 by anpereir          #+#    #+#             */
/*   Updated: 2022/09/26 15:49:49 by anpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar (char c)
{
	write (1, &c, 1);
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	while(a <= 98)
	{
		b = a + 1;
		while(b <= 99)
		{
			ft_putchar(48 + a / 10);
        		ft_putchar(48 + a % 10);
        		ft_putchar(' ');
        		ft_putchar(48 + b / 10);
        		ft_putchar(48 + b % 10);

			if( a != 98)
				ft_putchar(',');
                		ft_putchar(' ');
			b++;
		}
	a++;

}
}

int	main(void)
{ 
	ft_print_comb2();
	return (0);
}

