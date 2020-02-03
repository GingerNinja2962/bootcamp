#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char *argv[])
{
	int i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] > 64 && argv[1][i] < 78 && argv[1][i])
				ft_putchar(argv[1][i++] + 13);
			if (argv[1][i] > 77 && argv[1][i] < 91 && argv[1][i])
				ft_putchar(argv[1][i++] - 13);
			if (argv[1][i] > 96 && argv[1][i] < 110 && argv[1][i])
				ft_putchar(argv[1][i++] + 13);
			if (argv[1][i] > 109 && argv[1][i] < 123 && argv[1][i])
				ft_putchar(argv[1][i++] - 13);
			if (argv[1][i] < 65 || (argv[1][i] > 90 && argv[1][i] < 97) || argv[1][i] > 122)
				ft_putchar(argv[1][i++]);
		}
	}
	write(1, "\n", 1);
	return (0);
}
