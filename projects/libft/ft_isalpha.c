int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

/*#include <stdio.h>
#include <ctype.h>
int	main(int ac, char **av)
{
	(void)ac;
	printf("ft_isalpha('%c') -> %d\n", av[1][0], ft_isalpha(av[1][0]));
	printf("   isalpha('%c') -> %d\n", av[1][0], isalpha(av[1][0]));
	return (0);
}*/