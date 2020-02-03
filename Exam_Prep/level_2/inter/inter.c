#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_check(char *s1, char c, int num)
{
	int j;

	j = 0;
	while (j < num)
	{
		if (s1[j] == c)
			return (0);
		j++;
	}
	return (1);
}

void	ft_inter(char *s1, char *s2)
{
	int i;
	int j;
	
	i = 0;
	while (s1[i])
	{
		if (ft_check(s1, s1[i], i) == 1)
		{
			j = 0;
			while (s1[i] != s2[j] && s2[j])
			{
				j++;
			}
			if (s1[i] == s2[j])
				ft_putchar(s1[i]);
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	if (argc == 3)
		ft_inter(argv[1], argv[2]);
	ft_putchar('\n');
	return (0);
}
