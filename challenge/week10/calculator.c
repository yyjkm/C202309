#include <stdio.h>

double summation(double*a, double*b, double*result);  //summation 함수 선언
double subtraction(double* a, double* b, double*result);  // subtraction 함수 선언
double multification(double* a, double* b, double* result);  //multification 함수 선언
double division(double* a, double* b, double* result);  //dibision 함수 선언

int main()
{
	double a = 2, b = 3;
	double result;
	summation(&a, &b, &result);  // summation 함수 호출을 통해 두 변수의 값을 더함
	printf("%.0lf + %.0lf = %.2lf \n", a, b, result);

	subtraction(&a, &b, &result);  // subtraction 함수 호출을 통해 두 변수의 값을 뺌
	printf("%.0lf - %.0lf = %.2lf \n", a, b, result);

	multification(&a, &b, &result);  // multification 함수 호출을 통해 두 변수의 값을 곱함
	printf("%.0lf * %.0lf = %.2lf \n", a, b, result);

	division(&a, &b, &result);  // division 함수 호출을 통해 두 변수의 값을 나눔
	printf("%.0lf / %.0lf = %.2lf \n", a, b, result);

	return 0;
}

// 두 변수의 값을 더하는 함수
double summation(double* a, double* b, double* result) {
	*result = *a + *b;
}
// 두 변수의 값을 빼는 함수
double subtraction(double* a, double* b, double* result) {
	*result = *a - *b;
}
// 두 변수의 값을 곱하는 함수
double multification(double* a, double* b, double* result) {
	*result = *a * *b;
}
// 두 변수의 값을 나누는 함수
double division(double* a, double* b, double* result) {
	*result = *a / *b;
}