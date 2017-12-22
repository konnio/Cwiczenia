// Podstawy programowania - Cwiczenia
// 22.12.2017
// Cwiczenie 3 - Konwersja z 2 na 10
#include<stdio.h>


int main ()
{
	int liczba;
	printf("Podaj liczbe do konwersji ");
	scanf("%d", &liczba);
	
	printf("Wynik: ");
	if (liczba == 0) 
		{
		printf("0\n");
		return 0;
		}
	
	do{
	printf("%d ", liczba % 2);
	liczba /=2;
	} while(liczba != 0);
	printf("\n");
	
/*	if (liczba == 0) 
		{
		printf("0\n");
		return 0;
		}

	while (liczba != 0)
		{
		printf("%d ", liczba % 2);
		liczba /= 2;
		}
	//printf("1\n");
*/
return 0;
}
