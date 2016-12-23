#include <stdlib.h>

char 	*ft_itoa(int nb)
{
	int		i;
	char	*str;
	int		ok;

	i = 0;
	ok = 0;
	str = (char*)malloc(sizeof(char) * 32);
	if (nb == 0)
		str[i++] = 48;
	if (nb < 0)
		ok = 1;
	while (nb != 0)
	{
		if (nb < 0)
			str[i] = -1 * (nb % 10) + 48;
		else	
			str[i] = nb % 10 + 48;
		nb = nb / 10;
		i++;
	}
	if (ok == 1)
		str


}
