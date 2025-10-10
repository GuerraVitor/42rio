/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguerra- <vguerra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 19:19:06 by vguerra-          #+#    #+#             */
/*   Updated: 2025/08/13 19:26:33 by vguerra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int result;

	if (power < 0)
		return (0);
	if (power ==  0 || nb == 0)
		return (1);
	result = 1;
	while (power > 0)
	{
		result *= nb;
		power--;
	}
	return (result);
}
/*#include <stdio.h>
#include <stdlib.h>
int main(int ac, char **av)
{
	int nb = atoi(av[1]);
	int power = atoi(av[2]);
	(void)ac;
	printf("%d\n", ft_iterative_power(nb, power));
	return 0;
}*/
