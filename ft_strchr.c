#include "libft.h"

char *ft_strchr(const char *str, int c)
{
	char *s;

	s = (char*)str;
	if (s)
	{
		while (*s)
		{
			if ((char)c == *s)
				return (s);
		}
		if ((char)c == 0)
			return (s);
	}
	return (NULL);
} // nu cred ca e bine
