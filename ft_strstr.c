#include "libft.h"

char	*ft_strstr(const char *str, const char *to_find)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i] != '\0' && to_find[j] != '\0')
	{
		while (str[i] == to_find[j])
		{
			i++;
			j++;
		}
		i++;
	}
	if (to_find[j] == '\0')
		return (to_find);
	return (0);
}
