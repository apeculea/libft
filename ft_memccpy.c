#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	j;
	char	*s1;
	char	*s2;

	if (!dst || !src)
		return (NULL);
	j = 0;
	s1 = (char *)dst;
	s2 = (char *)src;
	while (j < n)
	{
		s1[j] = s2[j];
		if ((char)c == s1[j])
			return ((void*)&1[j + 1]);
		j++;
	}
	return (NULL);
}
