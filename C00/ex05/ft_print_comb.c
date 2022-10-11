/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 12:26:49 by anpereir          #+#    #+#             */
/*   Updated: 2022/09/26 12:40:39 by anpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>


void ft_print_comb(void)
{
	char a;
	char b;
	char c;
	
	a = '0';
	while( a <= '7')
	{ 
		b = a+1;
		while( b <= '8')
		{
			c = b+1;
			while( c <= '9')
			{
				write(1, &a, 1);
				write(1, &b, 1);
				write(1, &c, 1);
				 
				if ( a != '7')
					write(1, ", ", 2);
				c++;
			}
			b++;}
		a++;
	}
}

int main(void)
{
	ft_print_comb();
	return(0);
}
