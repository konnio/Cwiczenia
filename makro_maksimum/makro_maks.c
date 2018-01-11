// Podstawy programowania - Cwiczenia
// 11.01.2018
// Cwiczenie 1 - Makro obliczajace maksimum i minimum

#include<stdio.h>
// a > b ? a : b
#define MAKS(a,b) (((a)>(b))?(a):(b))
#define MIN(a,b) (((a)>(b))?(a):(b))


int main ()
{
	const int liczba1 = 1000;
	const int liczba2 = 2;
	printf("%d\n",MAKS(liczba1, liczba2));
	return 0;
}
