#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
	unsigned int MyAddress_w = 192;
	unsigned int MyAddress_x = 168;
	unsigned int MyAddress_y = 129;
	unsigned int MyAddress_z = 10;
	unsigned int IPv4MaskLength = 24;

	unsigned int Adresse_machine = 0;
	Adresse_machine = (MyAddress_w << 24) + (MyAddress_x << 16) + (MyAddress_y << 8) + MyAddress_z;
	printf("\n%u", Adresse_machine);


	unsigned int masque = 0;
	int i = 0;
	for (i = 0; i < 24; i++) {
		masque = masque + pow(2, 31 - i);
	}

	unsigned long int Adresse_reseau = 0;
	Adresse_reseau = Adresse_machine & masque;

	printf("\n%d", Adresse_reseau >> 24);
	Adresse_reseau = Adresse_reseau<<8;
	Adresse_reseau = Adresse_reseau >> 8;
	printf(".%d", (Adresse_reseau >> 16));
	Adresse_reseau = Adresse_reseau << 16;
	Adresse_reseau = Adresse_reseau >> 16;
	printf(".%d", (Adresse_reseau >> 8));
	Adresse_reseau = Adresse_reseau << 24;
	Adresse_reseau = Adresse_reseau >> 24;
	printf(".%d", (Adresse_reseau));
	printf(" /%d", IPv4MaskLength);
}