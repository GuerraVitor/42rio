/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguerra- <vguerra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 17:19:03 by vguerra-          #+#    #+#             */
/*   Updated: 2025/08/09 17:36:50 by vguerra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str)
	{
		if (!(*str >= 'A' && *str <= 'Z'))
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
    char str1[] = "ASHASH";
    char str2[] = "ASaFDD";

    answ1 = ft_str_is_uppercase(str1);
    printf("1: %d \n", answ1);

    answ2 = ft_str_is_uppercase(str2);
    printf("2: %d \n", answ2);

    return 0;
}*/
