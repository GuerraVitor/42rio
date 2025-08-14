/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguerra- <vguerra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 13:31:54 by vguerra-          #+#    #+#             */
/*   Updated: 2025/08/14 16:41:40 by vguerra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

void	ft_putstr(char *str)
{
	int	len;

	len = 0;
	len = ft_strlen(str);
	write(1, str, len);
}
/*#include <stdio.h>
int	main(int ac, char **av)
{
	(void)ac;
	ft_putstr(av[1]);
	return (0);
}*/
