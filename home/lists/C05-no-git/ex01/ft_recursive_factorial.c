/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguerra- <vguerra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 19:05:17 by vguerra-          #+#    #+#             */
/*   Updated: 2025/08/13 19:18:16 by vguerra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}
/*#include <stdio.h>
#include <stdlib.h>
int main(int ac, char **av)
{
	int nb = atoi(av[1]);
	(void)ac;
	printf("%d\n", ft_recursive_factorial(nb));
	return 0;
}*/
