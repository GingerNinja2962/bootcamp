#include <unistd.h>

int main(int argc, char *argv[])
{
	int i;
	int j;
	int a;
	int b;

	a = 1;
	if (argc == 3)
	{
		while (a < 3)
		{
			i = 0;
			while (argv[a][i])
			{
				b = a;
				j = i;
				while (argv[a][i] != argv[b][--j] && b > 0 && j > 0)
				{
					j = i;
					while (argv[a][i] != argv[b][j] && j > 0)
						j--;
					b--;
				}
				if (argv[b][j] != argv[a][i])
				{
					write(1, &argv[a][i], 1);
				}
				i++;
			}
			a++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
