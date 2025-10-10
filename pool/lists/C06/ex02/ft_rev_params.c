/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguerra- <vguerra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 11:12:00 by vguerra-          #+#    #+#             */
/*   Updated: 2025/08/14 11:52:09 by vguerra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
	int	arg_len;

	ac -= 1;
	while (ac > 0)
	{
		arg_len = 0;
		while (av[ac][arg_len])
			arg_len++;
		write(1, av[ac], arg_len);
		write(1, "\n", 1);
		ac--;
	}
	return (0);
}
