/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 12:52:05 by anpereir          #+#    #+#             */
/*   Updated: 2022/09/23 12:57:44 by anpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>


void	ft_print_numbers(void) {

	char numeros;
	numeros = '0';
	while ( numeros <= '9') {
		write(1, &numeros, 1);
		numeros++;
	}
}

int	main(void) {

	ft_print_numbers();
	return(0);
}
