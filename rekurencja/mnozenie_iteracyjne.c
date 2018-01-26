#include <stdio.h>

int mnoz (int x, int y)
{
	int z = 0;

	for (int i = 1; i <= y; ++i)
	{
		z += x;
	}

	return z;
}

int main()
{
	int a = 4, b = 7, wynik;

	wynik = mnoz(a, b);	
	printf("%d * %d = %d\n", a, b, wynik);
	return 0;
}
