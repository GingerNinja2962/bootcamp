#include <unistd.h>

int		max(int* tab, unsigned int len)
{
	unsigned int i;
	int j;

	j = 0;
	i = 0;
	while (i < len)
	{
		if (tab[i] > j)
			j = tab[i];
		i++;
	}
	return (j);
}
