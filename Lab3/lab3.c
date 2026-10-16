#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <locale.h>
#define    D 2.54
#define    D_angl 2.54
#define    D_pul 2.32166
#define    D_st 2.7076

int n1()
{
	int num;
	int num2;
	puts("введите 1-е число");
	scanf("%d", &num);
	printf("Выведено число %d\n", num);
	puts("введите 2-е число");
	scanf("%d", &num2);
	printf("Выведено число %d\n", num2);

	printf("Сумма %d\n", num2 + num);
	printf("Разность %d\n", num2 - num);
	printf("Остаток от деления %d на %d равен %d\n", num2, num, num2 % num);
	printf("Умножение %d на %d равно %d\n", num2, num, num2 * num);

	printf("%d разделить %d равно %f\n", num2, num, (float)num2 / num);

	return 0;
}

int n2()
{
	int dym;
	float result;

	puts("введите кол-во дюймов");
	scanf("%d", &dym);
	result = D * dym;
	printf("%d дюймов – это % .4f см \n", dym, result);
	result = D_angl * dym;
	printf("%d английских дюймов – это % .4f см \n", dym, result);
	result = D_pul * dym;
	printf("%d испанских дюймов – это % .4f см\n", dym, result);
	result = D_st * dym;
	printf("%d старолитовских дюймов – это % .4f см \n", dym, result);

	return 0;
}

int n3()
{
	float a;
	float b;

	puts("введите a и b ");
	scanf("%f", &a);
	scanf("%f", &b);
	puts("___________+___________+___________\n");
	printf("|   %.10s   |   %.10s   |   %.10s   |\n", "a * b", "a + b", "a - b");
	puts("___________+___________+___________\n");
	printf("|%5.4g*%-5.4g|%5.4g+%-5.4g|%5.4g-%-5.4g|\n", a, b, a, b, a, b);
	puts("___________+___________+___________\n");
	printf("|%11.4g|%11.4g|%11.4g|\n ", a * b, a + b, a - b);

	return 0;
}

int probel()
{
	printf("       \n");
	return 0;
}

int main()
{
	setlocale(LC_CTYPE, ".UTF8");
	n1();
	probel();
	probel();
	n2();
	probel();
	probel();
	n3();
	probel();
	return 0;
}
