// Podstawy programowania - Cwiczenia
// 22.12.2017
// Cwiczenie 1
#include<stdio.h>

int mnozenie_iteracyjne()
	{
	int a, b, wynik = 0; 
	int ix = 0;
	
	printf("Program liczy iloczyn 2 liczb \n");
	printf("Podaj a: \n");
	scanf("%d",&a);
	printf("Podaj b: \n");
	scanf("%d",&b);

	for(ix = 0; ix < b; ++ix)
		{
		wynik += a;
		}
	printf("Wynik mnozenia wynosi: %d\n",wynik);
	}
		

void main ()
{
mnozenie_iteracyjne();
}
