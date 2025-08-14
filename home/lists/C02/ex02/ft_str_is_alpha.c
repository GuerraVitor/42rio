/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguerra- <vguerra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 17:19:03 by vguerra-          #+#    #+#             */
/*   Updated: 2025/08/09 17:55:19 by vguerra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str)
	{
		if (!((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z')))
			return (0);
		str++;
	}
	return (1);
}
/*#include <stdio.h>
int main(void)
{
    int answ1;
    int answ2;
    char str1[] = "abcdef";
    char str2[] = "asasd#";

    answ1 = ft_str_is_alpha(str1);
    printf("1: %d \n", answ1);

    answ2 = ft_str_is_alpha(str2);
    printf("2: %d \n", answ2);

    return 0;
}*/
