#include<stdio.h>
#include<string.h>
#include<stdlib.h>
// Cwiczenia 26.01.2018
// zamiana na wzor Hornera
// x * (x * (a3 *x + a2) + a1) + a0

// "atof" zamienia string na zmienna typu float

double schemat_klasyczny(int liczba_slow, char *const *tabela_slow)
{
	double wynik = 0.0;
	double potega_x = 1.0;
	double x = atof(tabela_slow[1]);

	for (int licznik = 2; licznik < liczba_slow; ++licznik)
	{
		wynik += potega_x * atof(tabela_slow[licznik]);
		potega_x *= x;
	}
	return wynik;

}

int main(int liczba_slow, char *tabela_slow [])
{
	
	if (liczba_slow > 2){ // pierwszy parametr to nazwa programu

		printf("Wynik: %lf\n", schemat_klasyczny(liczba_slow, tabela_slow));
	} else {
		printf("Niepoprawna liczba parametrow!");
	}
	return 0;
}
