#include <unistd.h>
unsigned char	reverse_bits(unsigned char octet)
{
	int bit;
	unsigned char rev;
	int i;

	rev = 0;
	i = 1;
	bit = 128;
	while (bit >= 1)
	{
		if (octet >= bit)
		{
			rev = (rev + i);
			octet = (octet - bit);
		}
		bit = (bit / 2);
		i = (i * 2);
	}
	return (rev);
}

