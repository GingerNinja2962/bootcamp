#include <unistd.h>

int		ft_atoi(const char *str)
{
	int i;
	int answer;

	answer = 0;
	i = 0;
	if (str[i])
	{
		while (str[i] > 47 && str[i] < 58)
			answer = ((answer * 10) + (str[i++] - '0'));
	}
	return (answer);
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_putnum(int num)
{
	if (num > 9)
	{
		ft_putnum(num / 10);
		ft_putnum(num % 10);
	}
	if (num >= 0 && num <= 9)
		ft_putchar(num + 48);
}

int		is_prime(int n)
{
	int i;
	int x;

	i = 1;
	x = 0;
	while (i <= n)
	{
		if((n % i) == 0)
			x++;
		i++;
	}
	if (x == 2)
		return (1);
	return (0);
}

int		main(int argc, char *argv[])
{
	int i;
	int	max;
	int	answer;

	answer = 0;
	i = 0;
	if (argc == 2)
	{
		max = ft_atoi(argv[1]);
		while (max > i)
		{
			if (is_prime(max) == 1)
				answer = (answer + max);
			max--;
		}
		ft_putnum(answer);
		write(1, "\n", 1);
		return (0);
	}
	write(1, "0\n", 1);
	return (0);
}
