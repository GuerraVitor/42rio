/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguerra- <vguerra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 17:19:03 by vguerra-          #+#    #+#             */
/*   Updated: 2025/08/10 14:34:18 by vguerra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char	*ptr;

	ptr = str;
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
			*str += 32;
		str++;
	}
	return (ptr);
}

int	is_alphanumeric(char *str)
{
	if (((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z')
			|| (*str >= '0' && *str <= '9')))
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int		flag;
	char	*ptr;

	ptr = ft_strlowcase(str);
	flag = 1;
	while (*str)
	{
		if (!(is_alphanumeric(str)))
		{
			flag = 1;
			str++;
		}
		if (flag == 1)
		{
			if (*str >= 'a' && *str <= 'z')
			{
				*str -= 32;
			}
			if (is_alphanumeric(str))
				flag = 0;
		}
		str++;
	}
	return (ptr);
}
/*#include <stdio.h>
int main(int argc, char **argv)
{
	(void)argc;	
	printf("%s \n", ft_strcapitalize(argv[1]));

    return 0;
}*/
