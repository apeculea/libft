#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*str1;
	char	*str2;
	size_t	j;

	if (n == 0)
		return (0);
	if (!(str1 = (char *)s1) || !(str2 = (char *)s2))
		return (0);
	j = 0;
	while (str1[j] == str2[j] && (j + 1 < n))
		j++;
	return (str1[j] - str2[j]);
}
