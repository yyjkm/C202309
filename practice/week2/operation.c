#include <stdio.h>

int main()
{
	int x = 4;  // ������ ���� x ���� �� �ʱ�ȭ
	int y = 2;  // ������ ���� y ���� �� �ʱ�ȭ
	int z;  // ������ ���� z ����

	z = x + y;  // x�� y�� ���� ��� ���� z�� �ʱ�ȭ
	printf("z = x + y = %d\n", z);
	z = x - y;  // x����  �� �� ��� ���� z�� �ʱ�ȭ 
	printf("z = x - y = %d\n", z);
	z = x * y;  // x�� y�� ���� ��� ���� z�� �ʱ�ȭ
	printf("z = x * y = %d\n", z);
	z = x / y;  // x�� y�� ���� ��� ���� z�� �ʱ�ȭ 
	printf("z = x / y = %d\n", z);

	return 0;
}