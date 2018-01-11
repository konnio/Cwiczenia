// Cwiczenia 11.01.2018
// biblioteka string.h

#include <stdio.h>
#include <string.h>

int main ()
{
	char ciag1[80];
	char ciag2[80];
	char *tymczasowy; // zadeklarowanie jako wskaznik
	int wynik;

	printf("Podaj ciag pierwszy: "); gets(ciag1); // pobiera dane z klawiatury do momentu wcisniecia 'enter'
	printf("Podaj ciag drugi: "); gets(ciag2);
// funkcja strcmp() - porownuje ciagi i zwraca 1, 0, -1
//	wynik = strcmp(ciag1, ciag2);
//	printf("%d\n", wynik);

// funkcja strstr()
	tymczasowy = strstr(ciag1, ciag2); //wypisuje ciag znakow od momentu znalezienia ciagu podanego jako ciag2
	printf("%s\n", tymczasowy ? tymczasowy : "nie zawiera" ); // opertor trynarny '?' jezeli falsz wyswietla tekst
								  // a > b ? prawda : falsz
// funkcja strcat() - laczy ciag1 i ciag2 a wynik polaczenia przekazuje do ciag1
	tymczasowy = strcat(ciag1, ciag2);
	printf("Wynik: %s\n", ciag1);
	printf("Wynik polaczenia: %s\n", tymczasowy);

	return 0;
}
//
