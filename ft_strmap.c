#include "libft.h"
#include <stdlib.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*new;
	int	i;

	new = (char*)malloc(sizeof(*new) * (ft_strlen(s) + 1));
	if (!new)
		return (NULL);
	i = 0;
	while (s[i])
	{
		new[i] = f(s[i]);
		i++;
	}
	new[i] = '\0';
	return (new);
}
