#include <unistd.h>

unsigned char	swap_bits(unsigned char octet)
{
	int bit;
	int i;
	int a;
	char s1[9];
	char temp[5];
	unsigned char rev;

	i = 0;
	a = 4;
	bit = 128;
	rev = 0;
	while (bit > 0)
	{
		if (octet >= bit)
		{
			s1[i++] = '1';
			octet = (octet - bit);
		}
		else
			s1[i++] = '0';
		bit = (bit / 2);
	}
	i = 0;
	while (i < 4)
	{
		temp[i] = s1[i];
		s1[i] = s1[a];
		s1[a] = temp[i];
		i++;
		a++;
	}
	i = 0;
	bit = 128;
	while (bit >= 1)
	{
		if (s1[i] == '1')
			rev = (rev + bit);
		bit = (bit / 2);
		i++;
	}
	return (rev);
}
