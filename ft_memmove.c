#include "libft.h"
#include <stdlib.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	unsigned char	*tmp;

	i = 0;
	if (!(tmp = (unsigned char*)malloc(sizeof(*tmp) * (n + 1))))
		return (NULL);
	while (i < n)
	{
		*(tmp + i) = *(unsigned char*)(src + i);
		i++;
	}
	 = 0;
	 while (i < n)
	 {
		 *(unsigned char*)(dst + i) = *(tmp + i);
		 i++;
	 }
	 free(tmp);
	 return (dst);
}
