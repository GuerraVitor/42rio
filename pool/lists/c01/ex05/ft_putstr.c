/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguerra- <vguerra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 11:13:23 by vguerra-          #+#    #+#             */
/*   Updated: 2025/08/06 15:47:47 by vguerra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	char	*ptr;
	int		size;

	size = 0;
	ptr = str;
	while (*ptr != '\0')
	{
		size++;
		ptr++;
	}
	write(1, str, size);
}

/*#include <stdio.h>
int	main(void)
{
	ft_putstr("hahahahahahaha");
	return (0);
}*/
