// Cwiczenie 2 11.01.2018
#include<stdio.h>
int main()
{
//	char *Napis = "Waniki.";  //test staly
//	*(Napis + 1) = 'y';  //proba podmiany 2 znaku nie powiedzie sie
//	printf("%s\n", Napis);

	char Tekst[16] = { "Pomolka."};
	Tekst[3] = 'y';
	*(Tekst + 3) = 'y'; // drugi sposob na podmiane tekstu
	printf("%s\n", Tekst);
	return 0;

}
