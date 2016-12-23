#include "libft.h"

int	strcmp(const char *s1, const char *s2)
{
	if (s1 == s2)
		return (0);
	else if (s1 > s2)
		return (1);
	else
		return (-1);
}
// ???
