// obliczanie zawartosci wody w histogramie
#include <stdio.h>
#define MAX(x,y) (((x) > (y)) ? (x) : (y)) //makro max
#define MIN(x,y) (((x) < (y)) ? (x) : (y)) //makro max
#define N 7

int policzwode(int *histogram);

int main()
{
	int histogram[N] = {3, 5, 4, 2, 1, 7, 2};

	printf("Maksymalny stan zgromadzonej wody wynosi %d. \n", policzwode(histogram));
	
	return 0;
}

int policzwode(int *histogram)
{
	int h_lewy[N];
	int h_prawy[N];
	int woda = 0;
	
	h_lewy[0] = histogram[0];
	for (int l = 1; l < N; ++l){
		h_lewy[l] = MAX(h_lewy[l - 1], histogram[l]);
	}

	h_prawy[N-1] = histogram[N-1];
	for (int p= N-2; p>=0; --p){
		h_prawy[p] = MAX(h_prawy[p+1], histogram[p]);
	}
	
	for (int k = 0; k < N; ++k){
		woda += MIN(h_lewy[k], h_prawy[k]) - histogram[k];
	}
	
	return woda;
}
