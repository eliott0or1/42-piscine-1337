#include <stdio.h>
#include "ft_abs.h"

int main(void)
{
	int	value;

	value = -5;
	while (value < 5)
	{
		printf("abs(%d) = %d\n", value ,ABS(value));
		value++;
	}
}
