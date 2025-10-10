/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguerra- <vguerra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 16:10:42 by vguerra-          #+#    #+#             */
/*   Updated: 2025/08/12 12:53:47 by vguerra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*start;	
	unsigned int	i;

	start = dest;
	while (*dest)
		dest++;
	i = 0;
	while (i < nb && *src)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	*dest = '\0';
	return (start);
}
/*#include <stdio.h>
int main(void)
{
	char dest[7] = "abc";
	char src[] = "def";
	printf("%s\n", ft_strncat(dest, src, 1));
	return 0;
}*/
