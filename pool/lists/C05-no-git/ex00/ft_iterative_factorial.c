/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguerra- <vguerra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 17:52:46 by vguerra-          #+#    #+#             */
/*   Updated: 2025/08/14 18:55:52 by vguerra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	result = 1;
	while (nb > 1)
	{
		result *= nb;
		nb--;
	}
	return (result);
}
#include <stdio.h>
#include <stdlib.h>
int main(int ac, char **av)
{
	int nb = atoi(av[1]);
	(void)ac;
	
	printf("%d\n", ft_iterative_factorial(nb));
	printf("%d\n", nb);
	return 0;
}
