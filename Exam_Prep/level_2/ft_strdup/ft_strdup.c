#include <unistd.h>
#include <stdlib.h>

char    *ft_strdup(char *src)
{
	int i;
	int j;
	char *dup;

	j = 0;
	i = 0;
	while (src[i])
		i++;
	dup = (char*)malloc((sizeof(char) * i) + 1);
	while (i > 0)
	{
		dup[j] = src[j];
		j++;
		i--;	
	}
	return (dup);
}
