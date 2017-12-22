// Podstawy programowania - Cwiczenia
// 22.12.2017
// Cwiczenie 5 - odwrotna kolejnosc znakow
#include<stdio.h>
#include<string.h>

int main ()
{
	char ciag_zn[100] = {"abcdef"};
	int dlugosc = 0;
	
	for (dlugosc = 0; ciag_zn[dlugosc] > 0; ++dlugosc);
	//dlugosc--;

	for (--dlugosc; dlugosc >= 0; --dlugosc) 
	{
	printf("%c", ciag_zn[dlugosc]);
	}
	printf("\n");
	return 0;

}
