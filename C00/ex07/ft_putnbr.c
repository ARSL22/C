/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 15:59:38 by anpereir          #+#    #+#             */
/*   Updated: 2022/09/27 10:45:19 by anpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>
​
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
​
void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}


int	main(void)

{	
	ft_putnbr(-214783648);
	return(0);
}



