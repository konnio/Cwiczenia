// Cwiczenia 25.01.2018
#include <stdio.h>
#include <stdbool.h>
struct zespolone
{
	double re;
	double im;
};

struct zespolone dodaj ( struct zespolone x, struct zespolone y)
{
	struct zespolone wynik;
	wynik.re = x.re + y.re; //dodajemy wartosc re dla x i dla y
	wynik.im = x.im + y.im; // dodajemy wartosc im dla x i dla y
	return wynik;
}

struct zespolone odejmij ( struct zespolone x, struct zespolone y)
{
	struct zespolone wynik;
	wynik.re = x.re - y.re;
	wynik.im = x.im - y.im;
	return wynik;
}

struct zespolone mnoz ( struct zespolone x, struct zespolone y)
{
	struct zespolone wynik;
	wynik.re = x.re * y.re - x.im * y.im;
	wynik.im = x.re * y.im + x.im * y.re;
	return wynik;
}

struct zespolone dziel ( struct zespolone x, struct zespolone y, bool *error)
{
	struct zespolone wynik;
	double k = y.re * y.re + y.im * y.im;
	
	if (k != 0.0){
		wynik.re = (x.re * y.re + x.im * y.im) / k;
		wynik.im = (x.im * y.re + x.re * y.im) / k;
		*error = false;
	} else {
		*error = true;
		return wynik;
	}
}




int main()
{
	struct zespolone a = {0.1, 5.1}, b = {-1.3, 2.4}; //a i b sa typu struct wiec maja pola "re" i "im"
	struct zespolone wynik;
	bool error;

	wynik = dodaj (a, b);
	printf("Wynik: a(%lf,%lf) + b(%lf,%lf) = w(%lf,%lf)\n", a.re, a.im, b.re, b.im,wynik.re, wynik.im);
	
	wynik = odejmij (a,b);
	printf("Wynik: a(%lf,%lf) - b(%lf,%lf) = w(%lf,%lf)\n", a.re, a.im, b.re, b.im,wynik.re, wynik.im);
	
	wynik = mnoz (a,b);
	printf("Wynik: a(%lf,%lf) * b(%lf,%lf) = w(%lf,%lf)\n", a.re, a.im, b.re, b.im,wynik.re, wynik.im);

	wynik = dziel (a, b, &error);
	if (!error) {
		printf("Wynik: a(%lf,%lf) / b(%lf,%lf) = w(%lf,%lf)\n", a.re, a.im, b.re, b.im,wynik.re, wynik.im);

	} else {
		printf("Dzielenie przez 0 !!!");
	}

	return 0;
}
