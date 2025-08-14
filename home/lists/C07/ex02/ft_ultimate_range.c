/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguerra- <vguerra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 15:02:57 by vguerra-          #+#    #+#             */
/*   Updated: 2025/08/14 15:52:50 by vguerra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *arr;
	int size;

	if (min == max || min > max)
		return NULL;

	arr = (int*)malloc(4 * (max - min));
	if (arr == NULL)
		return (0);
	size = min;
	while (size < max)
	{
		arr[size - min] = size;
		size++;
	}
	return (arr);
}
#include <stdio.h>
int main(int ac, char **av)
{
	(void)ac;
	int min = atoi(av[1]);
	int max = atoi(av[2]);
	int *arr = ft_range(min, max);
	int tamanho = max - min;
	for (int i = 0; i < tamanho; i++) {
    	printf("%d ", arr[i]);
  	}
  	printf("\n");
    return 0;
}
