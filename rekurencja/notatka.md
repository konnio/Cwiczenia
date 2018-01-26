# Funkcje rekuracyjne

int IR (int n)
{
	return n <= 0 ? 1 : n * IR(n -2);
}
