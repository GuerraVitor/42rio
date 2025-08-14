/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguerra- <vguerra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 17:29:51 by vguerra-          #+#    #+#             */
/*   Updated: 2025/08/12 12:52:25 by vguerra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*start;
	char	*find;

	if (*to_find == '\0')
		return (str);
	while (*str)
	{
		if (*str == *to_find)
		{
			start = str;
			find = to_find;
			while (*find && *find == *start)
			{
				find++;
				start++;
			}
			if (*find == '\0')
				return (str);
		}
		str++;
	}
	return (0);
}
/*#include <stdio.h>
int main(int ac, char **av)
{
	(void)ac;
	printf("%s\n", ft_strstr(av[1], av[2]));
	return (0); 
}*/
