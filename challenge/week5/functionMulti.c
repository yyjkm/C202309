#include <stdio.h>

long multiF(int value);  // multiF �Լ� ���� ����

void main()  // multiF �Լ� ȣ��
{
	printf("1���� 2������ ���� %d\n", multiF(2));
	printf("1���� 3������ ���� %d\n", multiF(3));
	printf("1���� 5������ ���� %d\n", multiF(5));
}

long multiF(int value)  // multiF �Լ� ����
{
	int i = 1;
	long multi = 1;

	while (i <= value) {  // i �� �Ű����� value ���� �۰ų� ������ �ݺ�
		multi = i * multi;  // ������ �����Ҷ� ���� multi �� ���� i�� ���� ����ŭ ����
		i++;  // �Ŀ� i �� 1�� ����
	}
	return multi;  // �Լ��� ������ ���� multi ���� ��ȯ
}