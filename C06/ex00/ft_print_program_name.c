#include <unistd.h>

int main(int arc, char *arv[])
{
	int i = 0;
	while (arv[0][i])
	{
		write(1, &arv[0][i++], 1);
	}
}
