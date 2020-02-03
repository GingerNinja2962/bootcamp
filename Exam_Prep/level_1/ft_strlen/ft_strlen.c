#include <unistd.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i]) //  goes until it hits null
		i++; // keeps incrementing until it can't satisfy the above condition
	return (i); // when the condition is unsatisfied the program is done and returns its out in this case sting length i 
}
