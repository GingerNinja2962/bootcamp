#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		repeater(char c)
{
	int i;

	i = 1;
	if (c > 64 && c < 91)
	{
		i = c - 64;
		while (i > 0)
		{
			ft_putchar(c);
			i--;
		}
		return (0);
	}
	if (c > 96 && c < 123)
	{
		i = c - 96;
		while (i > 0)
		{
			ft_putchar(c);
			i--;
		}
		return (0);
	}
	ft_putchar(c);
	return (0);
}

int		main(int argc, char *argv[])
{
	int i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			repeater(argv[1][i]);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
