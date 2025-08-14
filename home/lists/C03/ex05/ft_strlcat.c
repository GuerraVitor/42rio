/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguerra- <vguerra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 18:42:36 by vguerra-          #+#    #+#             */
/*   Updated: 2025/08/11 11:59:45 by vguerra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	left_len;
	unsigned int	i;

	dest_len = 0;
	while (dest[dest_len])
		dest_len++;
	src_len = 0;
	while (src[src_len])
		src_len++;
	if (dest_len >= size)
		return (size + src_len);
	left_len = size - dest_len -1;
	i = 0;
	while (src[i] && i < left_len)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (src_len + dest_len);
}
/*#include <stdio.h>
#include <string.h>
int main() {
    char buffer[10] = "Oi";
    size_t tamanho = ft_strlcat(buffer, " mundo", sizeof(buffer));

    printf("Resultado: %s\n", buffer);
    printf("Tamanho necessário: %zu\n", tamanho);
    return 0;
}*/
