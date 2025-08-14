/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguerra- <vguerra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 14:49:54 by vguerra-          #+#    #+#             */
/*   Updated: 2025/08/14 16:42:47 by vguerra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	signal;
	int	nb;

	nb = 0;
	signal = 1;
	while (*str)
	{
		while ((*str >= 9 && *str <= 13) || *str == ' ')
			str++;
		while (*str == '-' || *str == '+')
		{
			if (*str == '-')
				signal *= -1;
			str++;
		}
		while (*str >= 48 && *str <= 57)
		{
			nb = nb * 10 + (*str - '0');
			str++;
		}
		break ;
	}
	return (nb * signal);
}
/*#include <stdio.h>
int main(int ac, char **av)
{
	(void)ac;
	printf("%d\n", ft_atoi(av[1]));
	return (0);
}*/
