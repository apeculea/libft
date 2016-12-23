#include "stdlib.h"
#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	char	*new;

	if (!(new = (char*)malloc(sizeof(*new) * (size + 1))))
		return (NULL);
	new = (char*)ft_memset(new, 0, size + 1);
	return (new);
}
