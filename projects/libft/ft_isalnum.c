int	ft_isalnum(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9'));
}

/*#include <stdio.h>
#include <ctype.h>
int	main(int ac, char **av)
{
	(void)ac;
	printf("ft_isalnum('%c') -> %d\n", av[1][0], ft_isalnum(av[1][0]));
	printf("   isalnum('%c') -> %d\n", av[1][0], isalnum(av[1][0]));
	return (0);
}*/