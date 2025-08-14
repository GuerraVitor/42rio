/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguerra- <vguerra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 16:39:54 by vguerra-          #+#    #+#             */
/*   Updated: 2025/08/09 17:52:41 by vguerra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	n_src;
	int				n_dest;
	int				i;

	n_src = 0;
	while (src[n_src])
		n_src++;
	i = 0;
	n_dest = size;
	while (size > 1)
	{
		dest[i] = src[i];
		size--;
		i++;
	}
	dest[i] = '\0';
	return (n_src);
}
/*#include <stdio.h>
int	main(void)
{
	char src[10] = "vitor hugo";
	char dest[6];
	unsigned int size = 6;

	ft_strlcpy(dest, src, size);
	printf("dest: %s \nsrc: %s \n", dest, src);
	printf("%u\n", ft_strlcpy(dest, src, size));
	return (0);
}*/
