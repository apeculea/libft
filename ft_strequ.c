#include "libft.h"

int	ft_strequ(char const *s1, char const *s2)
{
	int	i;

	i = 0;
	while (s1 || s2)
	{
		if (s1[i] != s2[i])
			return (0);
	}
	return (1);
}
