// Cwiczenia 12.01.2018
// Algorytm bin search
//
#include<stdio.h>
#define M 11
#define N 5
#define K ((M)+(N))
int main()
{
	int A[M] = {1, 2, 4, 5, 7, 8, 10, 11, 12, 14, 15};
	int B[N] = {3, 5, 8, 8, 9};
	int C[K] = {0};
	int m = 0, n = 0, k = 0

	while(m < M && n < N) {
		if (A[m] < B[n]) {
			C[k] = A[m];
			++m;
			++k;
		}else {
			C[k] = B[n];
			++n;
			++k;
		}
	}

// skopiuj reszte elementow B
	while (n < N) {
	C[k] = B[n]; ++n; ++k
	}
// skopiuj reszte elementow A
	while (m < M) {
	C[k] = A[m]; ++m; ++k;
	}
// wyswietl

	for (m = 0; m < M; ++m) { printf("%d, ", A[m])}; printf("\n"); 
	for (n = 0; n < N; ++n) { printf("%d, ", B[n])}; printf("\n"); 
	for (k = 0; k < K; ++k) { printf("%d, ", c[k])}; printf("\n"); 

return 0;
}
