#include<stdio.h>
#include<locale.h>
int main()
{
	float m, h, F, R = 6370000, G = 6.67e-11, M = 5.98e24;
	setlocale(LC_ALL, "RUS");
	printf("¬ведите массу тела: \n");
	scanf_s("%f", &m);
	printf("\n¬ведите высоту: \n");
	scanf_s("%f", &h);
	F = G * M * m / ((R * R) + 2 * R * h + (h * h));
	printf("\n—ила т€жести равна: %.1f\n", F);
	system("pause");
}