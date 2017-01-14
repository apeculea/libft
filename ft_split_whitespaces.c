#include "libft.h"
#include <stdlib.h>

static int	nbwords(char *str)
{
	int i;
	int nr;

	i = 0;
	nr = 0;
	if (is_white(str[0]) == 0)
		nr++;
	while (str[i])
	{
		if (is_white(str[i]) == 1 && is_white(str[i + 1]) == 0)
			nr++;
		i++;
	}
	return (nr);
}

static int	lenw(char *str)
{
	int i;

	i = 0;
	nr = 0;
	if (is_white(str[i]) == 0 && str[i] != '\0')
		i++;
	return (i);
}

char	**ft_split_whitespaces(char const *s, char c)
{
	int i;
	int nrw;
	int j;
	char	**tab;

	i = 0;
	nrw = 0;
	tab = (char**)malloc(sizeof(char*) * (nbwords(s) + 1));
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
		{
			tab[nrw] = (char*)malloc(sizeof(char*) * (nbwords(s) + 1));
			j = 0;
			while (is_white(s[i]) == 0 && s[i] != '\0')
				tab[nrw][j++] = tr[i++];
			tab[nrw][j] = '\0';
			nrw++;
		}
	}
	tab[nrw] = NULL;
	return (tab);
}
