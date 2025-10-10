/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguerra- <vguerra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 11:12:35 by vguerra-          #+#    #+#             */
/*   Updated: 2025/08/06 13:31:15 by vguerra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	a_value;
	int	b_value;

	a_value = *a;
	b_value = *b;
	*a = a_value / b_value;
	*b = a_value % b_value;
}

/*int	main(0)
{
	int a = 11;
	int b =2;
	ft_ultimate_div_mod(&a, &b);
	printf("%d e %d", a, b);
	return (0);

}*/
