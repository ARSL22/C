/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 10:36:20 by anpereir          #+#    #+#             */
/*   Updated: 2022/09/23 12:13:21 by anpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h> 

void	ft_print_alphabet(void) {

	char letra;
	letra = 'a';
	while(letra <= 'z') {
		write(1, &letra, 1);
		letra ++;
	}		
}
/*
int	main(void){
	
	ft_print_alphabet(); 
	return (0);
}
*/
