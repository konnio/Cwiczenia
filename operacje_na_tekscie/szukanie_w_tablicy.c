// Cwiczenia 12.01.2018
// Algorytm bin search
//
#include<stdio.h>
#include<stdbool.h>
#define N 11

int main()
{
	int tab_sort[N] = {1, 2, 5, 7, 8, 10, 11, 12, 14, 15};
	int poczatek = 0;
	int koniec = N - 1;
	int srodek;
	int szukana = 3;
	bool znalazlem = false;	

	while (znalazlem != true && poczatek <= koniec) {
		srodek = (poczatek + koniec)/2;
		if(tab_sort[srodek] == szukana ){
			znalazlem = true;
		} else {
			if(tab_sort[srodek] > szukana){
				koniec =  srodek - 1;
			}else {
				poczatek = srodek + 1;
			}
		}
	}

	if (znalazlem == true) {
		printf ("znalazlem. Indeks: %d\n", srodek);
	}else{
		printf ("Element nie istnieje w tablicy");
	}

return 0;
}
