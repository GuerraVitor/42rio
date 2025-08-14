/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguerra- <vguerra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 14:00:31 by vguerra-          #+#    #+#             */
/*   Updated: 2025/08/09 17:54:54 by vguerra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*#include <stdio.h>

int	main(void)
{
	char str[10] = "012345678";
	char dest[10];
	
	ft_strcpy(dest, str);
	
	printf("1: %s \n2: %s \n", str, dest);
	return (0);	
}*/
