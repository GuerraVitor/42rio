int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/*#include <stdio.h>
#include <ctype.h>
int	main(int ac, char **av)
{
	(void)ac;
	printf("ft_isdigit('%c') -> %d\n", av[1][0], ft_isdigit(av[1][0]));
	printf("   isdigit('%c') -> %d\n", av[1][0], isdigit(av[1][0]));
	return (0);
}*/