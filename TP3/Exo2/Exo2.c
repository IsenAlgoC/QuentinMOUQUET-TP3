#include <stdlib.h>
#include <stdio.h>

int main() {
	unsigned long int number = 2868838400;
	unsigned long int cursor = 1;
	printf("%lu est code sur %d octets.\n",number, sizeof(number));
	printf("%lu est code sur %d bits.\n", number, sizeof(number)*8);
	int i = 0;
	int n = sizeof(number) * 8;
	for (i = 0; i < n; i++) {
		if ((number & 1) == 1) {
			printf("bit %d : ON\n", i);
		}
		else {
			printf("bit %d : OFF\n", i);
		}
		number = number >> 1;
	}
	printf("Bye ;)");
}