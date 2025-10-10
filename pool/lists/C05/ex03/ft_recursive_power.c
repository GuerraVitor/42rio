/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguerra- <vguerra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 19:27:35 by vguerra-          #+#    #+#             */
/*   Updated: 2025/08/13 19:33:16 by vguerra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power ==  0 || nb == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
/*#include <stdio.h>
#include <stdlib.h>
int main(int ac, char **av)
{
	int nb = atoi(av[1]);
	int power = atoi(av[2]);
	(void)ac;
	printf("%d\n", ft_recursive_power(nb, power));
	return 0;
}*/
