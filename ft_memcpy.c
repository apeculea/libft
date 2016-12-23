#include "libft.h"

void	*ft_memcpy(void *dst, const void src, size_t n)
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
		j++;
	}
	return ((void*)dst);
}
