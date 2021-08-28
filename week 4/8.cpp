#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {

	float a, b, c;
	scanf("%f%f%f", &a, &b, &c);
	if (a < b && a < c)
		printf("%2f", a);
	else if (b < a && b < c)
		printf("%2f", b);
	else if (c < a && c < b)
		printf("%2f", c);
	return 0;
}
