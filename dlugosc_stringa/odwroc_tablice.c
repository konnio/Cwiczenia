// Podstawy programowania - Cwiczenia
// 22.12.2017
// Cwiczenie 6 - odwrocenie tablicy
#include<stdio.h>
#include<string.h>
int liczba_elem(char* tab){//wskaznik na tablice
	int dlugosc;
	for (dlugosc = 0; tab[dlugosc] > 0; ++dlugosc) ;
	// alternatywnie
	// for (dlugosc = 0; *(tab +dlugosc) > 0; ++dlugosc) ;
	return dlugosc;
	}

void zamien(char *znak1,char *znak2){
	char pomocnicza;
	pomocnicza = *znak1;
	*znak1 = *znak2;
	*znak2 = pomocnicza;
}

void odwroc(char* tab, int poczatek, int koniec)
{
	while(poczatek < koniec){
	zamien(&tab[poczatek], &tab[koniec]); //zwroci znaki z tablicy do funkcji zamiana
	++poczatek;
	--koniec;
	}
}

int main ()
{
	char ciag_zn[100] = {"Ala ma kota"};
	int dlugosc = 0;
	int poczatek = 0;
	int koniec;
		
	liczba_elem(ciag_zn);
	
	odwroc(ciag_zn, poczatek, dlugosc - 1);

	printf("%s \n", ciag_zn);
	return 0;
}
