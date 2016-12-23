#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s)
{
	int	i;
	int	j;
	int	k;
	char	*new;

	i = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	j = i;
	while (s[j])
		j++;
	j--;
	while (s[j] == ' ' || s[j] == '\n' || s[j] == '\t')
		j--;
	new = (char*)malloc(sizeof(*new) * (j - i + 1));
	if (!new)
		return (NULL);
	k = 0;
	while (i <= j)
	{
		new[k] = s[i];
		k++;
		i++;
	}
	new[k] = '\0';
	return (new);
}
// am facut singura. nu stiu daca merge
