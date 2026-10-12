#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int probel() {
    printf("\n");
}
int n1(int dym, float result) {

    int hours = dym / 3600;
    int minutes = (dym % 3600) / 60;
    int seconds = dym % 60;

    printf("Исходное время: %d сек.\n", dym);
    printf("Результат пересчета: %d ч. %d мин. %d сек.\n", hours, minutes, seconds);
    return (hours * 60) + minutes;
}

int main() {

    setlocale(LC_CTYPE, ".UTF8");
    int a;
    float b = 0.0f;

    printf("Введите временной интервал в секундах: ");
    scanf("%d", &a);

    int x = n1(a, b);
    probel();

    return 0;
}