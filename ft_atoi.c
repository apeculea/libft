#include <stdio.h>

int		ft_atoi(const char *str)
{
	int i;
	long aux;
	int ok;

	i = 0;
	aux = 0;
	ok = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			ok = 1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{	
		aux = aux * 10 + str[i] - 48;
		i++;
	}
	if (ok)
		return (-aux);
	else 
		return (aux);
}

int		main(int argc, char **argv)
{
	printf("%d\n", ft_atoi(argv[1]));
	return (0);
}
