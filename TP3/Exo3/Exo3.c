#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <ctype.h>

int main() {
	long float mark = 0;
	long float sum = 0;
	int numberOfMarks = 0;
	printf("\nEntrez la note no 1 : ");
	scanf_s("%lf", &mark);
	int valide = 0;
	char ch = 'A';
	if (mark >= 0 && mark <= 20) {
		valide = 1;
	}
	else {
		valide = 0;
	}
	while (valide) {
		sum = sum + mark;
		numberOfMarks = numberOfMarks + 1;
		printf("\nEntrez la note no %d : ", numberOfMarks+1);
		scanf_s("%lf", &mark);
		if (mark >= 0 && mark <= 20 && numberOfMarks<30) {
			valide = 1;
		}
		else {
			printf("\nElève absent ? ou voulez-vous arrêter la saisie des notes?A/O/N");
			ch = _getch();
			ch = toupper(ch);
			switch (ch) {
			case 'A':
				numberOfMarks = numberOfMarks - 1;
				mark = 0;
				valide = 1;
				break;
			case 'O':
				numberOfMarks = numberOfMarks - 1;
				mark = 0;
				valide = 1;
				break;
			case 'N':
				valide = 0;
				break;
			}
		}
	}
	printf("\n%.2f", sum / numberOfMarks);
}