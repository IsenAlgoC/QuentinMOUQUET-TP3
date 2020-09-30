#include <stdlib.h>
#include <stdio.h>

#define carre(x) (x)*(x)

int main() {
	int Nb = 5;
	printf("%d\n", carre(Nb));
	printf("%d\n", carre(Nb + 1));
}