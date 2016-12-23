#include "libft.h"

size_t	*ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	str;

	if (!dst || !src)
		return (0);
	i = 0;
	j = 0;
	while (dst[i] != '\0' && i < size)
		i++;
	if (size > 0)
	{
		while (src[j] && i < size - 1)
			dst[i++] = src[j++];
	}
	if (j > 0)
	{
		dst[i] = '\0';
		return (str + i - j); // ceee???
	}
	return (str + i);
}
