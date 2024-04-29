#include <unistd.h>

void	print_bits(unsigned char oct)
{
	int	i;
	int	div;

	div = 128;
	i = oct;
	while (div)
	{
		if (div <= i)
		{
			write (1, "1", 1);
			i %= div;
		}
		else
			write (1, "0", 1);
		div /= 2;
	}
}
