#include "lbft.h"

void	*ft_memset(void *b, int c, size_t n)
{
	size_t	j;
	char	*str;

	str = (char *)b;
	if (!str)
		return (NULL);
	if (len == 0)
		return (str);
	j = 0;
	while (j < n)
	{
		str[j] = (char *)c;
		j++;
	}
	return (b);
}
