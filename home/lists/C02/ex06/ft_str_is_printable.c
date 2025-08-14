/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguerra- <vguerra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 17:19:03 by vguerra-          #+#    #+#             */
/*   Updated: 2025/08/10 14:13:40 by vguerra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (*str < 32 || *str == 127)
			return (0);
		str++;
	}
	return (1);
}
/*#include <stdio.h>
int main(int ac, char **av)
{
	(void)ac;
	(void)av;
	
    printf("%d \n", ft_str_is_printable("\n"));
    return 0;
}*/
