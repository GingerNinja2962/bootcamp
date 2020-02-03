#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
}

int		main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (argv[1][i])
	{
		if (argv[1][i] > 96 && argv[1][i] < 123)
		{
			argv[1][i] = argv[1][i] - 32;
			i++;
		}
		if (argv[1][i] > 64 && argv[1][i] < 91)
		{	
			argv[1][i] = argv[1][i] + 32;
			i++;
		}
		if (argv[1][i] < 65 || argv[1][i] > 122 || (argv[1][i] > 90 && argv[1][i] < 97))
			i++;
	}
	if (argc == 2)
		ft_putstr(argv[1]);
	ft_putchar('\n');
	return (0);
}
