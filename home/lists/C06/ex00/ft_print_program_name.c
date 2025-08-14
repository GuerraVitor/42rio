/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguerra- <vguerra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 11:12:00 by vguerra-          #+#    #+#             */
/*   Updated: 2025/08/14 11:39:54 by vguerra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
	int	name_len;

	(void)ac;
	name_len = 0;
	while (av[0][name_len])
		name_len++;
    write(1, av[0], name_len);
    write(1, "\n", 1);
	return (0);
}
