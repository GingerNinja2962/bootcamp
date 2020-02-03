#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int s1;
	int s3;
	int answer;
	if (argc == 4)
	{
		s1 = atoi(argv[1]);
		s3 = atoi(argv[3]);
		if (argv[2][0] == '+')
			answer = (s1 + s3);
		if (argv[2][0] == '-')
			answer = (s1 - s3);
		if (argv[2][0] == '*')
			answer = (s1 * s3);
		if (argv[2][0] == '/')
			answer = (s1 / s3);
		printf("%d", answer);
	}
	if (argc != 4)
		write(1, "\n", 1);
	return (0);
}
