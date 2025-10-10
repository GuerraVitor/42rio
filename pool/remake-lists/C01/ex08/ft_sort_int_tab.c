void	ft_sort_int_tab(int *tab, int size)
{
	int i_index;
	int j_index;
	int temp;
	int changed;

	i_index = 0;
	while (i_index < size - 1)
	{
		changed = 0;
		j_index = 0;
		while (j_index < size - 1 - index_i)
		{
			if (tab[index_j] > tab[index_j + 1])
			{
				temp = tab[index_j];
				tab[index_j] = tab[index_j + 1];
				tab[index_j + 1] = temp;
				changed = 1;
			}
			j_index++;
		}
		if (changed == 0)
		{
			break;
		}
		i_index++;
	}
}
