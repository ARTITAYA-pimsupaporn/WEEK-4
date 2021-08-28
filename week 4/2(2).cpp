#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

float bmi(float h, float w) {

	h = h / 100;
	return w / (h * h);
}
int main() {

	float h, w, BMI;
	printf("Enter your Height and Weight : ");
	scanf("%f %f", &h, &w);
	BMI = bmi(h, w);
	printf("BMI = %.3f", BMI);
	if (BMI >= 30.0)
		printf(" --> Very Fat");
	else if (BMI >= 25.0)
		printf(" --> Fat");
	else if (BMI >= 18.5)
		printf(" --> Normal");
	else
		printf(" --> Gaunt");
	printf("\n");
	return 0;
}
