// Cwiczenia 12.01.2018
// Cwiczenie 1
// main z parametrami

#include<stdio.h>
#include<string.h>

int main(int liczba_slow, char *tabela_slow [])
{
	char wyjscie[200] = {0}; //wyzerowanie tablicy
	
	for (int slowo = 1; slowo < liczba_slow; ++slowo)
	{
		strcat(wyjscie, tabela_slow[slowo]); // laczy podane slowa
		//printf("%s\n", tabela_slow[slowo]);
	}
	
	printf("%s\n", wyjscie);
return 0;
}
