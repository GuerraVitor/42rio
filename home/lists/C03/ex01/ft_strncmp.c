/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguerra- <vguerra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 15:19:37 by vguerra-          #+#    #+#             */
/*   Updated: 2025/08/11 17:55:04 by vguerra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < n)
	{
		i++;
	}
	if (i == n)
		return (0);
	return (s1[i] - s2[i]);
}
/*#include <stdio.h>
int	main(int ac, char **av)
{
	(void)ac;
	unsigned int i;

	i = *av[3] - '0';

		printf("%d\n", ft_strncmp(av[1], av[2], i));
	return (0);
	
}*/
