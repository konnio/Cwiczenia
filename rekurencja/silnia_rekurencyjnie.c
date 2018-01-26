//Program liczacy n!
#include <stdio.h>


double silnia_rek (int x)
{
	if (x > 1) {
		return x * silnia_rek(x-1);
	}else {
		return 1;
	}
}

double silnia_rek2 (int x)
{
		return (x > 1) ? x * silnia_rek(x-1) : 1;
}



int main (){

	int n; 
	double silnia;

	printf("Podaj liczbe n a oblicze n! : \n"); scanf("%d", &n);

	silnia = silnia_rek2(n);

	printf("wartosc n! wynosi: %lf \n", silnia);

	return 0;
}

