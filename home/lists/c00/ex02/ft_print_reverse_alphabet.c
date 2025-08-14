/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguerra- <vguerra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 18:17:29 by vguerra-          #+#    #+#             */
/*   Updated: 2025/07/31 18:23:34 by vguerra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	control;

	control = 'z';
	while (control >= 'a')
	{
		write(1, &control, 1);
		control--;
	}
}
/*
int	main(void)
{
	ft_print_reverse_alphabet();
        return 0;
}
*/
