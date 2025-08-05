void	ft_rev_int_tab(int *tab, int size)
{
	int temp;
	int start;
	int final;

	start = 0;
	end = size - 1;
	while (start < final)
	{
		temp = tab[start];
		tab[start] = tab[end];
		tab[end] = temp;
		star++;
		end--;
	}
}

/*int	main(void)
{
	return (0);
}*/
