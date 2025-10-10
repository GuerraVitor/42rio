/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguerra- <vguerra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 12:28:21 by vguerra-          #+#    #+#             */
/*   Updated: 2025/08/14 15:02:21 by vguerra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		src_len;
	int		i;
	char	*dup;
	
	src_len = 0;
	while (src[src_len])
		src_len++;
	
	dup = (char*)malloc(src_len);
	if (dup == NULL)
		return (0);
	i = 0;
	while (i < src_len)
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
/*#include <stdio.h>
int main(int argc, char **argv)
{
	char *dest;
	dest = ft_strdup(argv[1]);
    printf("%s\n", dest);
    return 0;
}*/
