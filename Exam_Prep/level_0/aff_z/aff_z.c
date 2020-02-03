#include <unistd.h>

int main(int argc, char *argv[])
{
	int i;

	i = 0;
	if (argc == 1)
	{
		while (argv[2][i] != 'z')
			i++;
		if (argv[2][i] == 'z')
			write(1, "z\n", 2);
		return (0);
	}
	if (argc != 1)
		write(1, "z\n",2);
	return (0);
}
