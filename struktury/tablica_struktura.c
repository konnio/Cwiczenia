#include <stdio.h>
//glebokie kopiowanie

struct tablica {
	int tab[3];
};

int main()
{
	struct tablica t1 = {{6, 3, 8}}, t2;
	
	t2 = t1; //gleboka kopia
	t2.tab[2] = 30; //dla zilustrowania ze zmienia sie tylko t2
	t1.tab[0] = 0;  // dla zilustrowania ze zmienia sie tylko t1

	printf("t1 = {%d, %d, %d}\n", t1.tab[0], t1.tab[1], t1.tab[2]);
	printf("t1 = {%d, %d, %d}\n", t2.tab[0], t2.tab[1], t2.tab[2]);
}
