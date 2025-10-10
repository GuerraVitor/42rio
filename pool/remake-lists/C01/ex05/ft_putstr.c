void	ft_putstr(char *str)
{
	int size;
	char *ptr;

	size = 0;
	*ptr = str;

	while (*ptr != '\0')
	{
		size++;
		ptr++;
	}
	write(1, str, size);
}

/*int	main(void)
{
	return (0);
}*/
