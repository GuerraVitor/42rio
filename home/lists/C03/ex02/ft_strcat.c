/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguerra- <vguerra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 19:54:16 by vguerra-          #+#    #+#             */
/*   Updated: 2025/08/11 11:55:48 by vguerra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char	*dest_start;
	int		dest_final;
	int		src_final;

	dest_start = dest;
	dest_final = 0;
	while (dest[dest_final])
		dest_final++;
	src_final = 0;
	while (src[src_final])
	{
		dest[dest_final + src_final] = src[src_final];
		src_final++;
	}
	dest[dest_final + src_final] = '\0';
	return (dest_start);
}
/*#include <stdio.h>
int main(int ac, char **av)
{
	(void)ac;
	printf("%s\n", ft_strcat(av[1], av[2]));
	return 0;
}*/
