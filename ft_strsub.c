#include "libft.h"
#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	i;

	new = (char*)malloc(sizeof(*new) * len + 1);
	if (!new)
		return (NULL);
	i = 0;
	while (i < len)
	{
		new[i] = s[start + 1];
		i++;
	}
	new[i] = '\0';
	return (new);
}
