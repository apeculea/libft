#include <stdio.h>

int		ft_strlen(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		j++;
		i++;
	}
	return (j);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		printf("%d\n", ft_strlen(argv[1]));
	return (0);
}	
