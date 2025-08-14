/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguerra- <vguerra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 16:40:15 by vguerra-          #+#    #+#             */
/*   Updated: 2025/08/14 16:43:29 by vguerra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int			base_len;
	long long	n;

	base_len = ft_check_base(base);
	n = nbr;
	if (base_len == 0)
		return ;
	if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
	}
	if (n >= base_len)
		ft_putnbr_base(n / base_len, base);
	write(1, &base[n % base_len], 1);
}
/*#include <stdio.h>
#include <stdlib.h>
int	main(int ac, char **av)
{
	int nb;
	nb = atoi(av[1]);
	(void)ac;
	ft_putnbr_base(nb, av[2]);
	return (0);
}*/
