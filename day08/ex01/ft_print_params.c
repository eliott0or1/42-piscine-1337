#include <unistd.h>

int main(int arc, char *arv[])
{
	(void)arc;
	int i = 1;
	while (arv[i])
	{
		int j = 0;
		while (arv[i][j] != '\0')
		{
			write (1, &arv[i][j], 1);
			j++;
		}
		i++;
		write (1, "\n", 1);
	}
}
