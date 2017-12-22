// Podstawy programowania - Cwiczenia
// 22.12.2017
// Cwiczenie 4 - Sprawdzenie dlugosci ciagu znakow
#include<stdio.h>
#include<string.h>

int main ()
{
	char ciag_zn[100] = {"abcdef"};
	int i = 0;
	// petla while
	// while(ciag_zn[1] != 0) i++;
	// printf("Dlugosc ciagu znakow: %d\n", i);
	// petla for
	for (i = 0; ciag_zn[i] > 0; i++) ; //nie wykonuje zadnych polecen
	printf("Dlugosc ciagu znakow: %d\n", i);
	// printf("Dlugosc ciagu znakow: %d\n", strlen(ciag_zn));
	return 0;
}
