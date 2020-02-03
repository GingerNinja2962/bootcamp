#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int argc, char *argv[])
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (argc == 4)
	{
		while(argv[1][i])
		{
			if (argv[1][i] == argv[2][0])
				argv[1][i] = argv[3][0];
			i++;
		}
		while (i > 0)
		{
			ft_putchar(argv[1][j++]);
			i--;
		}
	}
	write(1, "\n", 1);
	return (0);
}
