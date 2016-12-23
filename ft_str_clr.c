void	ft_strclr(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		s[i] = '\0';
		i++;
	}
}

int		main(int argc, char **argv)
{
	int	i;
	int	z;

	i = 1;
	z = 1;
	while (i < argc)
	{
		ft_strclr(argv[z]);
		z++;
		i++;
	}
	return (0);
}
