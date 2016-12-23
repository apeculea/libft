#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*last;

	while (str)
	{
		if (*str == c)
			last = (char *)str;
		if (*str++ == '\0')
			return (str);
	}
	return (NULL);
} // aaa ???
