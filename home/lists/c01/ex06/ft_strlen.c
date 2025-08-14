/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguerra- <vguerra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 11:21:08 by vguerra-          #+#    #+#             */
/*   Updated: 2025/08/06 13:25:14 by vguerra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	size;

	size = 0;
	while (*str != '\0')
	{
		size++;
		str++;
	}
	return (size);
}

/*int	main(void)
{
	int i;

	i = ft_strlen("kjsahjkashkh");
	printf("%d",i);
	return (0);
}*/
