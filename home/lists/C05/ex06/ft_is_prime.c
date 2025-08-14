/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguerra- <vguerra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 20:16:28 by vguerra-          #+#    #+#             */
/*   Updated: 2025/08/13 20:54:16 by vguerra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int cand;


	if (nb <= 0 || nb == 1)
		return (0);
	if (nb == 2)
		return (1);
	cand = 2;
	while (cand < nb)
	{
		if (nb % cand == 0)
			return (0);
		cand++;
	}
	return (1);
}
/*#include <stdio.h>
#include <stdlib.h>
int main(int ac, char **av)
{
	int nb = atoi(av[1]);
	(void)ac;
	
	printf("%d\n", ft_is_prime(nb));
	return 0;
}*/
