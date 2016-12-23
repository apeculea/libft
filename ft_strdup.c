#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dup;
	int		i;

	i = 0;
	dup = (char *)malloc(sizeof(*dup));
	while (src[i] != '\0')
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

#include <stdio.h>

int		main(void)
{
	char	str[] = "abcd";
	printf("%s\n", ft_strdup(str));
	return (0);
}
