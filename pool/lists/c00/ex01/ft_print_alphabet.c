/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguerra- <vguerra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 18:03:04 by vguerra-          #+#    #+#             */
/*   Updated: 2025/07/31 18:15:51 by vguerra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	control;

	control = 'a';
	while (control <= 'z')
	{
		write(1, &control, 1);
		control++;
	}
}
/*
int	main(void)
{
	ft_print_alphabet();
	return 0;
}
*/
