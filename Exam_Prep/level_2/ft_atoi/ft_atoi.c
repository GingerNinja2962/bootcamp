#include <unistd.h>

int	ft_atoi(const char *str)
{
	int i;
	int sign;
	int answer;

	answer = 0;
	sign = 1;
	i = 0;
	if (str[i])
	{
		while (str[i] == '	' || str[i] == ' ' || (str[i] > 8 && str[i] < 14))
			i++;
		if (str[i] == '+' || str[i] == '-')
		{
			if (str[i++] == '-')
				sign = -1;
		}
		while (str[i] > 47 && str[i] < 58)
			answer = ((answer * 10) + (str[i++] - '0'));
	}
	answer = (answer * sign);
	return (answer);
}
