#include <stdio.h>
int main() {
	int a = 3;
	int b = a;
	a = 10;

	printf("sonuc A : %d\n", a);
	printf("sonuc B : %d\n", b);

	int *p (&a);
	return 0;
}