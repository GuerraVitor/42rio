/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguerra- <vguerra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 19:29:52 by vguerra-          #+#    #+#             */
/*   Updated: 2025/08/09 17:55:56 by vguerra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str)
	{
		if (!(*str >= '0' && *str <= '9'))
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
    char str1[] = "1234a56";
    char str2[] = "1234567";

    answ1 = ft_str_is_numeric(str1);
    printf("1: %d \n", answ1);

    answ2 = ft_str_is_numeric(str2);
    printf("2: %d \n", answ2);
 
    return 0;
}*/
