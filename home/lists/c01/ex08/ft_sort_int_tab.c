/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguerra- <vguerra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 11:24:05 by vguerra-          #+#    #+#             */
/*   Updated: 2025/08/06 13:29:08 by vguerra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i_index;
	int	j_index;
	int	temp;

	i_index = 0;
	while (i_index < size - 1)
	{
		j_index = 0;
		while (j_index < size - 1 - i_index)
		{
			if (tab[j_index] > tab[j_index + 1])
			{
				temp = tab[j_index];
				tab[j_index] = tab[j_index + 1];
				tab[j_index + 1] = temp;
			}
			j_index++;
		}
		i_index++;
	}
}

/*int main(void)
{
    int arr[] = {5, 2, 4, 3, 1};
    int size = sizeof(arr) / sizeof(int);
    
    ft_sort_int_tab(arr, size);

    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}*/
