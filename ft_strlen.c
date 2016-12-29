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
