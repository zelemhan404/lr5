#define _USE_MATH_DEFINES 
#define M_PI  3.14159265358979323846
#include <math.h>
#include <stdio.h>
#include <locale.h>
int tasl1() {
	setlocale(LC_CTYPE, "RUS");
	int y,x;
	x = 1;
	y = 1;
	printf("ответ: % .3f", sin(pow(x, 0.5 * y)) + pow(y + 8e-4, 1 / 5.f));
}
int task2() {
	setlocale(LC_CTYPE, "RUS");
	float gr, rad, res;
	printf("градусы:");
	scanf("%f", &gr);
	rad = gr * M_PI / 180;
	res = sin(rad);
	printf("синус равен %.6f", res);
	return 0;
}
int task3() {
	setlocale(LC_CTYPE, "RUS");

}
int main() {
	task2();
}