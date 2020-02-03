#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int bit;

	bit = 128;
	while (bit > 0)
	{
		if (octet >= bit)
		{
			write(1, "1", 1);
			octet = (octet - bit);
		}
		else
		{
			write(1, "0", 1);
		}
		bit = (bit / 2);
	}
}
