#include <stdio.h>

double summation(double*a, double*b, double*result);  //summation �Լ� ����
double subtraction(double* a, double* b, double*result);  // subtraction �Լ� ����
double multification(double* a, double* b, double* result);  //multification �Լ� ����
double division(double* a, double* b, double* result);  //dibision �Լ� ����

int main()
{
	double a = 2, b = 3;
	double result;
	summation(&a, &b, &result);  // summation �Լ� ȣ���� ���� �� ������ ���� ����
	printf("%.0lf + %.0lf = %.2lf \n", a, b, result);

	subtraction(&a, &b, &result);  // subtraction �Լ� ȣ���� ���� �� ������ ���� ��
	printf("%.0lf - %.0lf = %.2lf \n", a, b, result);

	multification(&a, &b, &result);  // multification �Լ� ȣ���� ���� �� ������ ���� ����
	printf("%.0lf * %.0lf = %.2lf \n", a, b, result);

	division(&a, &b, &result);  // division �Լ� ȣ���� ���� �� ������ ���� ����
	printf("%.0lf / %.0lf = %.2lf \n", a, b, result);

	return 0;
}

// �� ������ ���� ���ϴ� �Լ�
double summation(double* a, double* b, double* result) {
	*result = *a + *b;
}
// �� ������ ���� ���� �Լ�
double subtraction(double* a, double* b, double* result) {
	*result = *a - *b;
}
// �� ������ ���� ���ϴ� �Լ�
double multification(double* a, double* b, double* result) {
	*result = *a * *b;
}
// �� ������ ���� ������ �Լ�
double division(double* a, double* b, double* result) {
	*result = *a / *b;
}