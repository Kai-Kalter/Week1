#include <stdio.h>


int main(void) {

	int a; 
	int b; 
	int c;

	a = 10;
	c = a * b;

	printf("voer een geheel getal in..");
	scanf_s("%d", &b);

	if (b > 9) {

		printf('het ingevoerde getal is groter dan 9');

	}

	printf("Programeren is leuk! %d\n", a);
	printf("A maal B is %d", c);


	return 0;
}