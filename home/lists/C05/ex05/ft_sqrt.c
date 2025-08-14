/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguerra- <vguerra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 19:59:52 by vguerra-          #+#    #+#             */
/*   Updated: 2025/08/13 20:14:50 by vguerra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	sqr;
	
	sqr = 1;
	while (sqr <= nb)
	{
		if (nb == sqr * sqr)
			return (sqr);
		sqr++;
	}
	return (0);
}
/*#include <stdio.h>
#include <stdlib.h>
int main(int ac, char **av)
{
	int sqr = atoi(av[1]);
	(void)ac;
	
	printf("%d\n", ft_sqrt(sqr));
	return 0;
}*/
