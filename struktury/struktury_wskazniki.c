#include <stdio.h>

struct zespolone{
	double re;
	double im;
};

struct zespolone dodaj(struct zespolone a, struct zespolone b, struct zespolone *wynik){
	
	wynik->re = a.re + b.re; //wskazanie do pola re w zmiennej wynik
	wynik->im = a.im + b.im;

}

int main()
{
	struct zespolone x = {3.1, 4.1}, y = {-2.1, 7.5}, w;
	
	w = dodaj(x, y, &w); //odwolanie do zmiennej wskaznikowej *wynik
	printf("a(%.2lf, %.2lf) + b(%.2lf, %.2lf) = w(%.2lf, %.2lf)\n", x.re, x.im, y.re, y.im, w.re, w.im);
	
	return 0;
}
