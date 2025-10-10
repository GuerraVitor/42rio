/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguerra- <vguerra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 11:12:00 by vguerra-          #+#    #+#             */
/*   Updated: 2025/08/14 11:46:10 by vguerra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
	int	arg_len;
	int	arg_count;

	arg_count = 1;
	while (ac > arg_count)
	{
		arg_len = 0;
		while (av[arg_count][arg_len])
			arg_len++;
		write(1, av[arg_count], arg_len);
		write(1, "\n", 1);
		arg_count++;
	}
	return (0);
}
