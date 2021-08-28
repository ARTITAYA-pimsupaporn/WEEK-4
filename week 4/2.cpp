#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

double BMI(double w, double h) {
	h = h / 100;
	return w / (h * h);
}
char criterion(double bmi) {

	printf("\n[V]ery fat , [F]at ,[N]ormal ,[L]ow ");
	char s[4] = { 'V','F','N','L' };
	char v[4] = { 30,25,18,0 };
	for (int i = 0; i <= strlen(s); i++) {
		if (bmi > v[i]) {
			return s[i];
		}
	}
}
int main1() {

	double w, h, bmi;
	printf("Enter your weight and height : ");
	scanf("%lf %lf", &w, &h);
	bmi = BMI(w, h);
	printf("BMI = %.3lf\n", bmi);
	printf("\ncriterion = %c\n", criterion(bmi));

	return 0;
}