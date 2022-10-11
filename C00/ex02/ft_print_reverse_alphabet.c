/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 12:43:29 by anpereir          #+#    #+#             */
/*   Updated: 2022/09/23 12:49:38 by anpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include <unistd.h>

void	ft_print_reverse_alphabet(void) {
       char letra;
	letra = 'z';
 	while(letra >= 'a'){
 		write(1, &letra, 1);
		letra--;	}

}

int	main(void) {
	ft_print_reverse_alphabet();
	return(0);
}	
