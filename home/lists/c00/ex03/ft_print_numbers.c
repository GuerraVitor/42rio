/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguerra- <vguerra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 18:27:40 by vguerra-          #+#    #+#             */
/*   Updated: 2025/07/31 18:29:19 by vguerra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	control;

	control = '0';
	while (control <= '9')
	{
		write(1, &control, 1);
		control++;
	}
}
/*
int	main(void)
{
        ft_print_numbers();

        return 0;
}
*/
