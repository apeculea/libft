#include <stdlib.h>

char	*ft_strdup(const char *src)
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
