#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	int	i;
	size_t	j;
	char	*s1;
	char	*s2;

	if (!s1 || !s2)
		return (NULL);
	s1 = (char*)dest;
	s2 = (char*)src;
	i = 0;
	j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0' && j < n)
	{
		s1[i + j] = s2[j];
		j++;
	}
	s1[i + j] = '\0';
	return (s1);
}
