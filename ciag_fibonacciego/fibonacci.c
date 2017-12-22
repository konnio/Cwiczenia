// Podstawy programowania - Cwiczenia
// 22.12.2017
// Cwiczenie 2 - Ciag Fibonacciego
#include<stdio.h>


int main ()
{
	int a = 0;
	int b = 1;
	int c,n;
	
	printf("Ktory element Ciagu Fibonacciego mam wyswietlic?: \n"); scanf("%d",&n);

	if (n <=2) printf("%d - elementem ciagu jest: 1", n);
	else 
	{
		for(int i = 0; i < n; ++i){
		// printf("%d |", a);
		c = a + b;
		a = b;
		b = c;
		}
	printf("%d - elementem ciagu jest: %d \n", n, c);
	}
}
